; Unwind@006a1fab  006a1fab
006a1fab  MOV EAX,dword ptr [EBP + 0xfffff7ac]
006a1fb1  AND EAX,0x80000
006a1fb6  JZ 0x006a1fd1
006a1fbc  AND dword ptr [EBP + 0xfffff7ac],0xfff7ffff
006a1fc6  LEA ECX,[EBP + 0xfffff804]
006a1fcc  JMP 0x004a20f0
006a1fd1  RET
