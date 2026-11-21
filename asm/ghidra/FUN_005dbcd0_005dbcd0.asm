; FUN_005dbcd0  005dbcd0
005dbcd0  PUSH EBP
005dbcd1  MOV EBP,ESP
005dbcd3  PUSH ECX
005dbcd4  MOV dword ptr [EBP + -0x4],ECX
005dbcd7  CMP dword ptr [0x007947b8],0x0
005dbcde  JZ 0x005dbcf5
005dbce0  MOV ECX,dword ptr [0x007947b8]
005dbce6  CALL 0x005f8990
005dbceb  MOV dword ptr [0x007947b8],0x0
005dbcf5  MOV ESP,EBP
005dbcf7  POP EBP
005dbcf8  RET
