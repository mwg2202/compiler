#include <iostream>
#include <string>
#include <boost/program_options.hpp>

class CommandLineOptions{
    namespace po = boost::program_options;
    /*
    Options:
    [-t| --tokens]              Displays the Tokens
    [-p| --parse-tree]          Displays the Parse Tree
    [-o| --output]              Picks an output location
    [-I| --include]             Include Path
    [-ir|--ir-code]             Outputs LLVM IR Code
    [-no|--no-optimizations]    Outputs code without Optimizations
    [-v|--version]              Displays the version
    */

    public:
        enum statusReturn_e{
            OPTS_SUCCESS,
            OPTS_VERSION,
            OPTS_HELP,
            OPTS_FAILURE
        };

        CommandLineOptions();
        ~CommandLineOptions();
        statusReturn_e parse(int argc, char* argv[]);

        inline const std::string & getInputFile() const;
        inline const bool getParseTreeFlag(){return ParseTreeFlag;};
        inline const std::vector<std::string> getIncludeDirs(){return IncludeDirs;};
        inline const bool getIRCodeFlag(){return IRCodeFlag;};
        inline const bool getTokensFlag(){return TokensFlag};
        inline const std::string getVersionNumber(){return VERSION_NUMBER;};

    
    protected:
        void setup();
        bool validateFiles();
    
    private:
        CommandLineOptions( const CommandLineOptions &rhs);
        CommandLineOptions &operator*(const CommandLineOptions &rhs);

        po::options_description myOptions;
        std::vector<std::string> IncludeDirs;
        std::string myInputFile;
        bool TokensFlag;
        bool IRCodeFlag;
        bool ParseTreeFlag;
    
    const std::string & CommandLineOptions::getInputFile() const {
        static const std::string emptyString;
        return ( 0 < myInputFile.size()) ? myInputFile : emptyString;

    }
};