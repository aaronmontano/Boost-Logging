# Boost-Logging
Examples of the logging capabilities from the Boost C++ Library. 

# Introduction and Motivation 

The purpose of this repository is to provide a step-by-step instructional guide for setting up the logging capabilities from the _Boost C++ Libraries_. 

__Disclaimer__: Some subject matter contained herein originates from [boost.org](https://www.boost.org/) and I do not claim original ownership of any familiar material. 

# Setting Up _Boost_

In this section, the steps required to set up the _Boost C++ Libraries_ will be provided. Instructions are executed on the __macOS Monterey__ operating system. 

## Download _Boost_

Go to the [_Boost_ download page](https://www.boost.org/) and select `boost_1_79_0.tar.bz2` to download on your system. 

## Unzip Download to Specified Directory 

After the `tar.bz2` has been downloaded, navigate to a directory-of-choice where you wish to have the _Boost_ libraries installed and unzip the archive file with the following commands:

```
tar --bzip2 -xf /path/to/boost_1_79_0.tar.bz2
```

The resulting folder in your directory-of-choice, `boost_1_79_0`, will be referred to as _Boost_ __root__ from here on out. 

## Bootstrap and b2 

While in the folder containing _Boost_ __root__, navigate into the _Boost_ __root__. Within this folder, you will find a file by the name of `bootstrap.sh`. Issue the following command in the CLI:

```
/bootstrap.sh --prefix=/desired/path/to/install/ 
```

After running, you will see a various collection of CLI prompts referring to `b2`. Run the following command _while remaining in the Boost __root__ directory_:

```
./b2 install 
```

The CLI will perform a lengthy series of installations and configurations. Do not exit this process. 

After the installation is complete, navigate out of the _Boost_ __root__ directory via `cd ../`. Two new directories will be present: `include` and `lib`. 

## Compilation, Linking, and Execution of Program 

```
c++ -I /path/to/boost_1_79_0 log_test.cpp -o run.exe /path/to/lib/libboost_log_setup.a /path/to/lib/libboost_thread.a /path/to/lib/libboost_log.a -fvisibility=hidden
```
