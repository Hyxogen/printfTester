#ifndef MANDATORYTESTS_H
#define MANDATORYTESTS_H

#include <AirTester.h>
#include "../PrintfTester.h"

#define TESTS_ONE_SPECIFIER(sp) "%" sp

#define TESTS_NO_SPECIFIER_HELLOWORLD(sp) "Hello World!\n"
#define TESTS_ONE_SPECIFIER_HELLOWORLD(sp) "%" sp "ello World!\n"
#define TESTS_TWO_SPECIFIER_HELLOWORLD(sp) "%" sp "ello World!%" sp ""
#define TESTS_THREE_SPECIFIER_HELLOWORLD(sp) "%" sp "ello%" sp "World!%" sp ""
#define TESTS_ONLY_SPECIFIER_HELLOWORLD(sp) "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp ""
#define TESTS_ONLY_SPECIFIER_HELLOWORLD_ARG(i) i, i, i, i, i, i, i, i, i, i, i, i, i

#define TESTS_NO_SPECIFIER_LORUM(sp) "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.\nNulla malesuada pellentesque elit eget gravida cum. Scelerisque mauris pellentesque pulvinar pellentesque habitant morbi tristique senectus et. Condimentum lacinia quis vel eros donec ac odio. Dictum non consectetur a erat nam at lectus. At varius vel pharetra vel turpis nunc. Cursus eget nunc scelerisque viverra mauris. Tempor orci eu lobortis elementum nibh tellus molestie nunc. Convallis posuere morbi leo urna molestie at elementum. Fermentum leo vel orci porta non pulvinar neque laoreet su sp endisse. Nunc aliquet bibendum enim facilisis gravida neque. Diam volutpat commodo sed egestas egestas fringilla phasellus faucibus scelerisque. Id aliquet lectus proin nibh nisl. Lobortis scelerisque fermentum dui faucibus. Vitae proin sagittis nisl rhoncus mattis rhoncus. Ornare lectus sit amet est.\n\nMattis enim ut tellus elementum sagittis vitae et. Sed arcu non odio euismod lacinia at quis risus. Est ultricies integer quis auctor elit. Urna id volutpat lacus laoreet non curabitur. Mauris augue neque gravida in fermentum et. Dignissim sodales ut eu sem integer vitae justo. Erat velit scelerisque in dictum non consectetur a erat. In mollis nunc sed id semper risus in. Tortor vitae purus faucibus ornare su sp endisse sed nisi lacus sed. Eget est lorem ipsum dolor sit amet consectetur adipiscing. Pretium lectus quam id leo. Pretium vulputate sapien nec sagittis aliquam malesuada. Viverra ipsum nunc aliquet bibendum enim facilisis. Scelerisque fermentum dui faucibus in ornare quam viverra orci. At quis risus sed vulputate odio ut enim blandit. Sagittis purus sit amet volutpat consequat mauris nunc congue."
#define TESTS_ONE_SPECIFIER_LORUM(sp) "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat%" sp "Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.\nNulla malesuada pellentesque elit eget gravida cum. Scelerisque mauris pellentesque pulvinar pellentesque habitant morbi tristique senectus et. Condimentum lacinia quis vel eros donec ac odio. Dictum non consectetur a erat nam at lectus. At varius vel pharetra vel turpis nunc. Cursus eget nunc scelerisque viverra mauris. Tempor orci eu lobortis elementum nibh tellus molestie nunc. Convallis posuere morbi leo urna molestie at elementum. Fermentum leo vel orci porta non pulvinar neque laoreet su sp endisse. Nunc aliquet bibendum enim facilisis gravida neque. Diam volutpat commodo sed egestas egestas fringilla phasellus faucibus scelerisque. Id aliquet lectus proin nibh nisl. Lobortis scelerisque fermentum dui faucibus. Vitae proin sagittis nisl rhoncus mattis rhoncus. Ornare lectus sit amet est.\n\nMattis enim ut tellus elementum sagittis vitae et. Sed arcu non odio euismod lacinia at quis risus. Est ultricies integer quis auctor elit. Urna id volutpat lacus laoreet non curabitur. Mauris augue neque gravida in fermentum et. Dignissim sodales ut eu sem integer vitae justo. Erat velit scelerisque in dictum non consectetur a erat. In mollis nunc sed id semper risus in. Tortor vitae purus faucibus ornare su sp endisse sed nisi lacus sed. Eget est lorem ipsum dolor sit amet consectetur adipiscing. Pretium lectus quam id leo. Pretium vulputate sapien nec sagittis aliquam malesuada. Viverra ipsum nunc aliquet bibendum enim facilisis. Scelerisque fermentum dui faucibus in ornare quam viverra orci. At quis risus sed vulputate odio ut enim blandit. Sagittis purus sit amet volutpat consequat mauris nunc congue."
#define TESTS_TWO_SPECIFIER_LORUM(sp) "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat%" sp "Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.\nNulla malesuada pellentesque elit eget gravida cum. Scelerisque mauris pellentesque pulvinar pellentesque habitant morbi tristique senectus et. Condimentum lacinia quis vel eros donec ac odio. Dictum non consectetur a erat nam at lectus. At varius vel pharetra vel turpis nunc. Cursus eget nunc scelerisque viverra mauris. Tempor orci eu lobortis elementum nibh tellus molestie nunc. Convallis posuere morbi leo urna molestie at elementum. Fermentum leo vel orci porta non pulvinar neque laoreet su sp endisse. Nunc aliquet bibendum enim facilisis gravida neque. Diam volutpat commodo sed egestas egestas fringilla phasellus faucibus scelerisque. Id aliquet lectus proin nibh nisl. Lobortis scelerisque fermentum dui faucibus. Vitae proin sagittis nisl rhoncus mattis rhoncus. Ornare lectus sit amet est.\n\nMattis enim ut tellus elementum sagittis vitae et. Sed arcu non odio euismod lacinia at quis risus. Est ultricies integer quis auctor elit. Urna id volutpat lacus laoreet non curabitur. Mauris augue neque gravida in fermentum et. Dignissim sodales ut eu sem integer vitae justo. Erat velit scelerisque in dictum non consectetur a erat. In mollis nunc sed id semper risus in. Tortor vitae purus faucibus ornare su sp endisse sed nisi lacus sed. Eget est lorem ipsum dolor sit amet consectetur adipiscing. Pretium lectus quam id leo. Pretium vulputate sapien nec sagittis aliquam malesuada. Viverra ipsum nunc aliquet bibendum enim facilisis. Scelerisque fermentum dui faucibus in ornare quam viverra orci. At quis risus sed vulputate odio ut enim blandit. Sagittis%" sp " purus sit amet volutpat consequat mauris nunc congue."
#define TESTS_ONLY_SPECIFIER_LORUM(sp) "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp ""
#define TESTS_ONLY_SPECIFIER_LORUM_ARG(i) i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i

#define TEST_PRINTF GetTestFunction()
#define CORRECT_PRINTF GetCorrectFunction()
#define TEST_PRINTF_FUNC(...) EXPECT_TRUE(ComparePrintf(CORRECT_PRINTF, TEST_PRINTF, __VA_ARGS__))

#define MAX_WIDTH 20
#define MAX_PREC 20

#define TESTER_GROUP_NAME_(specifier_name) specifier_name##_tests
#define TESTER_SPECIFIER_(specifier) %##specifier
//#define TESTER_GROUP_NAME_(test, specifier_name) test_##specifier_name

#define MANDATORY_SINGLE_SPECIFIER_(specifier_name, specifier, collection)												\
TEST(TESTER_GROUP_NAME_(specifier_name), single_##specifier_name##_test) {												\
	for (auto val : collection) {																						\
    	TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER(specifier), val);															\
    	TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER(specifier), val);															\
    	TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER(specifier), val);                		            						\
	}																													\
}

#define MANDATORY_SPECIFIER_IN_STRING_(specifier_name, specifier, collection)											\
TEST(TESTER_GROUP_NAME_(specifier_name), specifier_name##_in_string_test) {												\
	for (auto val : collection) {																						\
    	TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER_HELLOWORLD(specifier), val);												\
		TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER_LORUM(specifier), val);													\
	}																													\
}

#define MANDATORY_SPECIFIERS_IN_STRING_(specifier_name, specifier, collection)											\
TEST(TESTER_GROUP_NAME_(specifier_name), specifier_name##s_in_string_test) {											\
	for (auto val : collection) {																						\
    	TEST_PRINTF_FUNC(TESTS_TWO_SPECIFIER_HELLOWORLD(specifier), val, val);											\
		TEST_PRINTF_FUNC(TESTS_TWO_SPECIFIER_LORUM(specifier), val, val);												\
		TEST_PRINTF_FUNC(TESTS_THREE_SPECIFIER_HELLOWORLD(specifier), val, val, val);									\
	}																													\
}

#define MANDATORY_ONLY_SPECIFIERS_IN_STRING_(specifier_name, specifier, collection)										\
TEST(TESTER_GROUP_NAME_(specifier_name), only_##specifier_name##s_in_string_test) {										\
	for (auto val : collection) {																						\
    	TEST_PRINTF_FUNC(TESTS_ONLY_SPECIFIER_HELLOWORLD(specifier), TESTS_ONLY_SPECIFIER_HELLOWORLD_ARG(val));			\
    	TEST_PRINTF_FUNC(TESTS_ONLY_SPECIFIER_LORUM(specifier), TESTS_ONLY_SPECIFIER_LORUM_ARG(val));					\
	}																													\
}

#define BONUS_SINGLE_SPECIFIER_NWIDTH_FPREC_FLAG_X_(specifier_name, specifier, flag, flag_name, collection)				\
TEST(TESTER_GROUP_NAME_(bonus##specifier_name), single_##specifier_name##_nwidth_fspec_##flag_name##_test) {			\
	for (auto val : collection) {																						\
		TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER(flag ".1" specifier), val);												\
		TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER(flag ".21" specifier), val);												\
		TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER(flag ".42" specifier), val);                           					\
	}																													\
}

#define BONUS_SINGLE_SPECIFIER_NWIDTH_VPREC_FLAG_X_(specifier_name, specifier, flag, flag_name, collection)				\
TEST(TESTER_GROUP_NAME_(bonus##specifier_name), single_##specifier_name##_nwidth_vspec_##flag_name##_test) {			\
	for (auto val : collection) {																						\
		for (int p = 0; p < MAX_PREC; p++) {																			\
			TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER(flag ".*" specifier), p, val);											\
			TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER(flag ".*" specifier), p, val);											\
			TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER(flag ".*" specifier), p, val);											\
        }																												\
	}																													\
}

#define BONUS_SINGLE_SPECIFIER_FWIDTH_NPREC_FLAG_X_(specifier_name, specifier, flag, flag_name, collection)				\
TEST(TESTER_GROUP_NAME_(bonus##specifier_name), single_##specifier_name##_fwidth_nspec_##flag_name##_test) {			\
	for (auto val : collection) {																						\
		for (int p = 0; p < MAX_PREC; p++) {																			\
			TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER(flag "1" specifier), p, val);											\
			TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER(flag "21" specifier), p, val);											\
			TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER(flag "42" specifier), p, val);											\
        }																												\
	}																													\
}

#define BONUS_SINGLE_SPECIFIER_VWIDTH_NPREC_FLAG_X_(specifier_name, specifier, flag, flag_name, collection)				\
TEST(TESTER_GROUP_NAME_(bonus##specifier_name), single_##specifier_name##_vwidth_nspec_##flag_name##_test) {			\
	for (auto val : collection) {																						\
		for (int w = 0; w < MAX_WIDTH; w++) {																			\
			TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER(flag "*" specifier), w, val);											\
			TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER(flag "*" specifier), w, val);											\
			TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER(flag "*" specifier), w, val);											\
        }																												\
	}																													\
}

#define BONUS_SINGLE_SPECIFIER_FWIDTH_FSPEC_FLAG_X_(specifier_name, specifier, flag, flag_name, collection)				\
TEST(TESTER_GROUP_NAME_(bonus##specifier_name), single_##specifier_name##_fwidth_fspec_##flag_name##_test) {			\
	for (auto val : collection) {																						\
    	TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER(flag "1.1" specifier), val);												\
    	TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER(flag "1.21" specifier), val);												\
    	TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER(flag "1.42" specifier), val);												\
    	TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER(flag "21.1" specifier), val);												\
    	TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER(flag "21.21" specifier), val);												\
    	TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER(flag "21.42" specifier), val);												\
    	TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER(flag "42.1" specifier), val);												\
    	TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER(flag "42.21" specifier), val);												\
    	TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER(flag "42.42" specifier), val);												\
	}																													\
}

#define BONUS_SINGLE_SPECIFIER_FWIDTH_VSPEC_FLAG_X_(specifier_name, specifier, flag, flag_name, collection)										\
TEST(TESTER_GROUP_NAME_(bonus##specifier_name), single_##specifier_name##_fwidth_vspec_##flag_name##_test) {							\
	for (auto val : collection) {																						\
		for (int p = 0; p < MAX_PREC; p++) {																			\
			TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER(flag "1.*" specifier), p, val);												\
			TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER(flag "21.*" specifier), p, val);											\
			TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER(flag "42.*" specifier), p, val);											\
		}																												\
	}																													\
}

#define BONUS_SINGLE_SPECIFIER_VWIDTH_FSPEC_FLAG_X_(specifier_name, specifier, flag, flag_name, collection)										\
TEST(TESTER_GROUP_NAME_(bonus##specifier_name), single_##specifier_name##_vwidth_fspec_##flag_name##_test) {							\
	for (auto val : collection) {																						\
		for (int p = 0; p < MAX_PREC; p++) {																			\
			TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER(flag "*.1" specifier), p, val);												\
			TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER(flag "*.21" specifier), p, val);											\
			TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER(flag "*.42" specifier), p, val);											\
		}																												\
	}																													\
}

#define BONUS_SINGLE_SPECIFIER_VWIDTH_VSPEC_FLAG_X_(specifier_name, specifier, flag, flag_name, collection)										\
TEST(TESTER_GROUP_NAME_(bonus##specifier_name), single_##specifier_name##_vwidth_vspec_##flag_name##_test) {							\
	for (auto val : collection) {																						\
		for (int p = 0; p < MAX_PREC; p++) {																			\
			for (int w = 0; w < MAX_WIDTH; w++) {																		\
				TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER(flag "*.*" specifier), w, p, val);										\
				TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER(flag "*.*" specifier), w, p, val);										\
				TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER(flag "*.*" specifier), w, p, val);										\
			}																											\
		}																												\
	}																													\
}

#define BONUS_SINGLE_SPECIFIER_NWIDTH_FSPEC_(specifier_name, specifier, collection)										\
BONUS_SINGLE_SPECIFIER_NWIDTH_FPREC_FLAG_X_(specifier_name, specifier, , nflag, collection)

#define BONUS_SINGLE_SPECIFIER_NWIDTH_VSPEC_(specifier_name, specifier, collection)										\
BONUS_SINGLE_SPECIFIER_NWIDTH_VPREC_FLAG_X_(specifier_name, specifier, , nflag, collection)

#define BONUS_SINGLE_SPECIFIER_FWIDTH_NSPEC_(specifier_name, specifier, collection)										\
BONUS_SINGLE_SPECIFIER_FWIDTH_NPREC_FLAG_X_(specifier_name, specifier, , nflag, collection)

#define BONUS_SINGLE_SPECIFIER_VWIDTH_NSPEC_(specifier_name, specifier, collection)										\
BONUS_SINGLE_SPECIFIER_VWIDTH_NPREC_FLAG_X_(specifier_name, specifier, , nflag, collection)

#define BONUS_SINGLE_SPECIFIER_FWIDTH_FSPEC_(specifier_name, specifier, collection)										\
BONUS_SINGLE_SPECIFIER_FWIDTH_FSPEC_FLAG_X_(specifier_name, specifier, , nflag, collection)

#define BONUS_SINGLE_SPECIFIER_FWIDTH_VSPEC_(specifier_name, specifier, collection)										\
BONUS_SINGLE_SPECIFIER_FWIDTH_VSPEC_FLAG_X_(specifier_name, specifier, , nflag, collection)

#define BONUS_SINGLE_SPECIFIER_VWIDTH_FSPEC_(specifier_name, specifier, collection)										\
BONUS_SINGLE_SPECIFIER_VWIDTH_FSPEC_FLAG_X_(specifier_name, specifier, , nflag, collection)

#define BONUS_SINGLE_SPECIFIER_VWIDTH_VSPEC_(specifier_name, specifier, collection)										\
BONUS_SINGLE_SPECIFIER_VWIDTH_VSPEC_FLAG_X_(specifier_name, specifier, , nflag, collection)

#define ALL_MANDATORY_TESTS(specifier_name, specifier, collection)														\
MANDATORY_SINGLE_SPECIFIER_(specifier_name, specifier, GetTestVector())													\
MANDATORY_SPECIFIER_IN_STRING_(specifier_name, specifier, GetTestVector())												\
MANDATORY_SPECIFIERS_IN_STRING_(specifier_name, specifier, GetTestVector())
//MANDATORY_ONLY_SPECIFIERS_IN_STRING_(specifier_name, specifier, GetTestVector())

#define ALL_BONUS_TESTS(specifier_name, specifier, collection)															\
BONUS_SINGLE_SPECIFIER_NWIDTH_FSPEC_(specifier_name, specifier, GetTestVector())										\
BONUS_SINGLE_SPECIFIER_NWIDTH_VSPEC_(specifier_name, specifier, GetTestVector())										\
BONUS_SINGLE_SPECIFIER_FWIDTH_NSPEC_(specifier_name, specifier, GetTestVector())										\
BONUS_SINGLE_SPECIFIER_VWIDTH_NSPEC_(specifier_name, specifier, GetTestVector())										\
BONUS_SINGLE_SPECIFIER_FWIDTH_FSPEC_(specifier_name, specifier, GetTestVector())										\
BONUS_SINGLE_SPECIFIER_FWIDTH_VSPEC_(specifier_name, specifier, GetTestVector())										\
BONUS_SINGLE_SPECIFIER_VWIDTH_FSPEC_(specifier_name, specifier, GetTestVector())										\
BONUS_SINGLE_SPECIFIER_VWIDTH_VSPEC_(specifier_name, specifier, GetTestVector())

typedef int (*PrintfFunc_T)(const char *, ...);

PrintfFunc_T GetTestFunction();
PrintfFunc_T GetCorrectFunction();

#endif //MANDATORYTESTS_H
