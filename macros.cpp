/*
Pre-defined Compiler Macros
To determine cross-platform systems
https://sourceforge.net/p/predef/wiki/OperatingSystems/
*/
#include <iostream>
using std::cout;
#if defined _WIN32
    // windows
    #include <windows.h>
#endif

int main(int argc, char* argv[]){

    cout << "****** Pre-defined Compiler Macros for various systems.\n";
    #ifdef __MINGW32__
        cout << "Using g++ MinGW kit!\n";
    #elif __CYGWIN__ 
        cout << "Using g++ CYGWIN kit!\n";
    #endif
    
    #ifdef __GNUC__
        #ifdef _WIN32
            printf("Compiler GNUC version=%d.%d", __GNUC__, __GNUC_MINOR__);
        #else
            printf("Compiler GNUC version=%d.%d\n", __GNUC__, __GNUC_MINOR__);
        #endif
    #elif     _MSC_VER 	
        printf("Compiler Microsoft MSVC Visual Studio %d\n", _MSC_VER);
    #endif

    #ifdef __APPLE__
        printf("\n");
        system("sw_vers; sysctl -n machdep.cpu.brand_string");
    #elif _WIN32          //  Windows Platform
        system("ver");
        #ifdef _WIN64 // Windows
            printf("64 bit ");
        #endif        
        system("echo %PROCESSOR_IDENTIFIER%"); 
    #elif __linux__
        system("uname -r -s -p -v");  
    #elif __ANDROID__
        cout << "My platform is Android!\n";
    #elif __FreeBSD__
        cout << "My platform is FreeBSD!\n";
    #else
        cout << "My platform is Unknown!\n";
    #endif

    return 0;
}
