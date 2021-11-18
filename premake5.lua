workspace "Workspace"
	startproject "printfTester"
	architecture "x86_64"

    configurations {"Debug", "Release", "Distribution"}
    platforms {"osx", "Win64"}

outputdir = "%{cfg.buildcfg}/%{cfg.system}/%{cfg.architecture}/"


include "Vendor/Air-Tester/Air-Tester"
include "printfTester"
