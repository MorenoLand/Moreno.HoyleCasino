; FUN_00626bc0  00626bc0
00626bc0  PUSH EBP
00626bc1  MOV EBP,ESP
00626bc3  PUSH ECX
00626bc4  MOV dword ptr [EBP + -0x4],ECX
00626bc7  MOV EAX,dword ptr [EBP + -0x4]
00626bca  CMP dword ptr [EAX + 0x5c],0x0
00626bce  JZ 0x00626beb
00626bd0  PUSH ECX
00626bd1  MOV ECX,ESP
00626bd3  MOV DX,word ptr [EBP + 0x8]
00626bd7  MOV word ptr [ECX],DX
00626bda  MOV AL,byte ptr [EBP + 0xa]
00626bdd  MOV byte ptr [ECX + 0x2],AL
00626be0  MOV ECX,dword ptr [EBP + -0x4]
00626be3  MOV ECX,dword ptr [ECX + 0x5c]
00626be6  CALL 0x005ee920
00626beb  MOV ESP,EBP
00626bed  POP EBP
00626bee  RET 0x4
