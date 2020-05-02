#include <iostream>
#include <boost/filesystem.hpp>
#include <boost/filesystem/path.hpp>
#include <boost/filesystem/operations.hpp>
#include <boost/algorithm/string/trim.hpp>
namespace fs = boost::filesystem;


#include "CommandLineOptions.h"

CommandLineOptions::CommandLineOptions():
    myOptions(""),
    myInputFile("")
{
    setup();
}

CommandLineOptions::~CommandLineOptions()
{

}

void CommandLineOptions::setup()
{
    
}