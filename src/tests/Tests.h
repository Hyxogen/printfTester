//
// Created by Daan Meijer on 11/23/21.
//

#ifndef MANDATORYTESTS_H
#define MANDATORYTESTS_H

#define TESTS_ONE_SPECIFIER(sp) #sp

#define TESTS_NO_SPECIFIER_HELLOWORLD(sp) "Hello World!\n"
#define TESTS_ONE_SPECIFIER_HELLOWORLD(sp) #sp"ello World!\n"
#define TESTS_TWO_SPECIFIER_HELLOWORLD(sp) #sp"ello World!"#sp""
#define TESTS_THREE_SPECIFIER_HELLOWORLD(sp) #sp"ello"#sp"World!"#sp""
#define TESTS_ONLY_SPECIFIER_HELLOWORLD(sp) #sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp""
#define TESTS_ONLY_SPECIFIER_HELLOWORLD_ARG(i) i, i, i, i, i, i, i, i, i, i, i, i, i

#define TESTS_NO_SPECIFIER_LORUM(sp) "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.\nNulla malesuada pellentesque elit eget gravida cum. Scelerisque mauris pellentesque pulvinar pellentesque habitant morbi tristique senectus et. Condimentum lacinia quis vel eros donec ac odio. Dictum non consectetur a erat nam at lectus. At varius vel pharetra vel turpis nunc. Cursus eget nunc scelerisque viverra mauris. Tempor orci eu lobortis elementum nibh tellus molestie nunc. Convallis posuere morbi leo urna molestie at elementum. Fermentum leo vel orci porta non pulvinar neque laoreet suspendisse. Nunc aliquet bibendum enim facilisis gravida neque. Diam volutpat commodo sed egestas egestas fringilla phasellus faucibus scelerisque. Id aliquet lectus proin nibh nisl. Lobortis scelerisque fermentum dui faucibus. Vitae proin sagittis nisl rhoncus mattis rhoncus. Ornare lectus sit amet est.\n\nMattis enim ut tellus elementum sagittis vitae et. Sed arcu non odio euismod lacinia at quis risus. Est ultricies integer quis auctor elit. Urna id volutpat lacus laoreet non curabitur. Mauris augue neque gravida in fermentum et. Dignissim sodales ut eu sem integer vitae justo. Erat velit scelerisque in dictum non consectetur a erat. In mollis nunc sed id semper risus in. Tortor vitae purus faucibus ornare suspendisse sed nisi lacus sed. Eget est lorem ipsum dolor sit amet consectetur adipiscing. Pretium lectus quam id leo. Pretium vulputate sapien nec sagittis aliquam malesuada. Viverra ipsum nunc aliquet bibendum enim facilisis. Scelerisque fermentum dui faucibus in ornare quam viverra orci. At quis risus sed vulputate odio ut enim blandit. Sagittis purus sit amet volutpat consequat mauris nunc congue."
#define TESTS_ONE_SPECIFIER_LORUM(sp) "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat"#sp"Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.\nNulla malesuada pellentesque elit eget gravida cum. Scelerisque mauris pellentesque pulvinar pellentesque habitant morbi tristique senectus et. Condimentum lacinia quis vel eros donec ac odio. Dictum non consectetur a erat nam at lectus. At varius vel pharetra vel turpis nunc. Cursus eget nunc scelerisque viverra mauris. Tempor orci eu lobortis elementum nibh tellus molestie nunc. Convallis posuere morbi leo urna molestie at elementum. Fermentum leo vel orci porta non pulvinar neque laoreet suspendisse. Nunc aliquet bibendum enim facilisis gravida neque. Diam volutpat commodo sed egestas egestas fringilla phasellus faucibus scelerisque. Id aliquet lectus proin nibh nisl. Lobortis scelerisque fermentum dui faucibus. Vitae proin sagittis nisl rhoncus mattis rhoncus. Ornare lectus sit amet est.\n\nMattis enim ut tellus elementum sagittis vitae et. Sed arcu non odio euismod lacinia at quis risus. Est ultricies integer quis auctor elit. Urna id volutpat lacus laoreet non curabitur. Mauris augue neque gravida in fermentum et. Dignissim sodales ut eu sem integer vitae justo. Erat velit scelerisque in dictum non consectetur a erat. In mollis nunc sed id semper risus in. Tortor vitae purus faucibus ornare suspendisse sed nisi lacus sed. Eget est lorem ipsum dolor sit amet consectetur adipiscing. Pretium lectus quam id leo. Pretium vulputate sapien nec sagittis aliquam malesuada. Viverra ipsum nunc aliquet bibendum enim facilisis. Scelerisque fermentum dui faucibus in ornare quam viverra orci. At quis risus sed vulputate odio ut enim blandit. Sagittis purus sit amet volutpat consequat mauris nunc congue."
#define TESTS_TWO_SPECIFIER_LORUM(sp) "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat"#sp"Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.\nNulla malesuada pellentesque elit eget gravida cum. Scelerisque mauris pellentesque pulvinar pellentesque habitant morbi tristique senectus et. Condimentum lacinia quis vel eros donec ac odio. Dictum non consectetur a erat nam at lectus. At varius vel pharetra vel turpis nunc. Cursus eget nunc scelerisque viverra mauris. Tempor orci eu lobortis elementum nibh tellus molestie nunc. Convallis posuere morbi leo urna molestie at elementum. Fermentum leo vel orci porta non pulvinar neque laoreet suspendisse. Nunc aliquet bibendum enim facilisis gravida neque. Diam volutpat commodo sed egestas egestas fringilla phasellus faucibus scelerisque. Id aliquet lectus proin nibh nisl. Lobortis scelerisque fermentum dui faucibus. Vitae proin sagittis nisl rhoncus mattis rhoncus. Ornare lectus sit amet est.\n\nMattis enim ut tellus elementum sagittis vitae et. Sed arcu non odio euismod lacinia at quis risus. Est ultricies integer quis auctor elit. Urna id volutpat lacus laoreet non curabitur. Mauris augue neque gravida in fermentum et. Dignissim sodales ut eu sem integer vitae justo. Erat velit scelerisque in dictum non consectetur a erat. In mollis nunc sed id semper risus in. Tortor vitae purus faucibus ornare suspendisse sed nisi lacus sed. Eget est lorem ipsum dolor sit amet consectetur adipiscing. Pretium lectus quam id leo. Pretium vulputate sapien nec sagittis aliquam malesuada. Viverra ipsum nunc aliquet bibendum enim facilisis. Scelerisque fermentum dui faucibus in ornare quam viverra orci. At quis risus sed vulputate odio ut enim blandit. Sagittis"#sp" purus sit amet volutpat consequat mauris nunc congue."
#define TESTS_ONLY_SPECIFIER_LORUM(sp) #sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp""
#define TESTS_ONLY_SPECIFIER_LORUM_ARG(i) i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i

#define MAX_WIDTH 20

typedef int (*PrintfFunc_T)(const char *, ...);

int TestNoSpecifier(PrintfFunc_T printf1, PrintfFunc_T printf2);

int	TestSingleChar(PrintfFunc_T printf1, PrintfFunc_T printf2);
int TestCharInString(PrintfFunc_T printf1, PrintfFunc_T printf2);
int TestCharsInString(PrintfFunc_T printf1, PrintfFunc_T printf2);
int TestOnlyCharsString(PrintfFunc_T printf1, PrintfFunc_T printf2);
int	TestBonusSingleChar(PrintfFunc_T printf1, PrintfFunc_T printf2);
int TestBonusCharInString(PrintfFunc_T printf1, PrintfFunc_T printf2);
int TestBonusCharsInString(PrintfFunc_T printf1, PrintfFunc_T printf2);
int TestBonusOnlyCharsString(PrintfFunc_T printf1, PrintfFunc_T printf2);

int TestSingleString(PrintfFunc_T printf1, PrintfFunc_T printf2);
int TestStringInString(PrintfFunc_T printf1, PrintfFunc_T printf2);
int TestStringsInString(PrintfFunc_T printf1, PrintfFunc_T printf2);
int TestOnlyStringsString(PrintfFunc_T printf1, PrintfFunc_T printf2);
int TestBonusWidthSingleString(PrintfFunc_T printf1, PrintfFunc_T printf2);
int TestBonusWidthStringInString(PrintfFunc_T printf1, PrintfFunc_T printf2);
int TestBonusWidthStringsInString(PrintfFunc_T printf1, PrintfFunc_T printf2);
int TestBonusWidthOnlyStringsString(PrintfFunc_T printf1, PrintfFunc_T printf2);
int TestBonusPrecSingleString(PrintfFunc_T printf1, PrintfFunc_T printf2);
int TestBonusPrecStringInString(PrintfFunc_T printf1, PrintfFunc_T printf2);
int TestBonusPrecStringsInString(PrintfFunc_T printf1, PrintfFunc_T printf2);
int TestBonusPrecOnlyStringsString(PrintfFunc_T printf1, PrintfFunc_T printf2);


#endif //MANDATORYTESTS_H
