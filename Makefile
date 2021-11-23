TARGET				:= printfTester

DEFINES				:=
DEPENDENCIES		:=

SRC_DIR				:= ./src
TESTS_DIR			:= $(SRC_DIR)/tests
OBJ_DIR				:= ./obj
SRCS				:= $(SRC_DIR)/Tester.cpp
TESTS				:= $(TESTS_DIR)/CharTests.cpp
OBJS				:= $(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
TESTS_OBJS			:= $(TESTS:$(TESTS_DIR)/%.cpp=$(OBJ_DIR)/%.o)
ALL_OBJS			:= $(OBJS) $(TESTS_OBJS)

CXX					:= clang++
CC					:= clang
LINK_CMD			:= clang
ALL_CXX_FLAGS		:= -Wall -Wextra -Werror -pedantic -std=c++17
ALL_C_FLAGS			:= -Wall -Wextra -Werror -pedantic -fsanitize=address

CXX_DISTR_FLAGS 	:= -Ofast
C_DISTR_FLAGS		:= -Ofast

CXX_RELEASE_FLAGS	:= -O2 -g
C_RELEASE_FLAGS		:= -O2 -g

CXX_DEBUG_FLAGS		:= -O0 -g
C_DEBUG_FLAGS		:= -O0 -g

.PHONY: all distribution release debug clean fclean re

all: debug

distribution: ALL_CXX_FLAGS += $(CXX_DISTR_FLAGS)
distribution: ALL_C_FLAGS += $(C_DISTR_FLAGS)
distribution: $(TARGET)

release: ALL_CXX_FLAGS += $(CXX_RELEASE_FLAGS)
release: ALL_C_FLAGS += $(C_RELEASE_FLAGS)
release: $(TARGET)

debug: ALL_CXX_FLAGS += $(CXX_DEBUG_FLAGS)
debug: ALL_C_FLAGS += $(C_DEBUG_FLAGS)
debug: $(TARGET)

SILENT				:= @
ifdef VERBOSE
SILENT				:=
endif

$(TARGET): $(ALL_OBJS)
	$(SILENT)echo Linking $(TARGET)...
	$(SILENT)$(LINK_CMD) -o $(TARGET) $(ALL_OBJS)
	$(SILENT)echo Made $(TARGET)!

$(OBJS): $(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(SILENT)mkdir -p $(OBJ_DIR)
	$(SILENT)$(CXX) $(ALL_CXX_FLAGS) -o $@ -c $<
	$(SILENT)echo $(notdir $<)

$(TESTS_OBJS): $(OBJ_DIR)/%.o: $(TESTS_DIR)/%.cpp
	$(SILENT)mkdir -p $(OBJ_DIR)
	$(SILENT)$(CXX) $(ALL_CXX_FLAGS) -o $@ -c $<
	$(SILENT)echo $(notdir $<)

clean:
	$(SILENT)rm -f $(ALL_OBJS)
	$(SILENT)echo Cleaned up object files for $(TARGET)

fclean: clean
	$(SILENT)rm -f $(TARGET)
	$(SILENT)echo Cleaned up $(TARGET)

re: fclean all