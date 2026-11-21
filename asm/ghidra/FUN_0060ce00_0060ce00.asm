; FUN_0060ce00  0060ce00
0060ce00  PUSH EBP
0060ce01  MOV EBP,ESP
0060ce03  SUB ESP,0x314
0060ce09  PUSH ESI
0060ce0a  PUSH 0x0
0060ce0c  MOV EAX,dword ptr [EBP + 0xc]
0060ce0f  PUSH EAX
0060ce10  PUSH 0x204c4150
0060ce15  MOV ECX,dword ptr [0x007960d8]
0060ce1b  MOV ECX,dword ptr [ECX + 0x18]
0060ce1e  CALL 0x00603c50
0060ce23  MOV dword ptr [EBP + -0x4],EAX
0060ce26  CMP dword ptr [EBP + -0x4],0x0
0060ce2a  JZ 0x0060cf3e
0060ce30  MOV EDX,dword ptr [EBP + -0x4]
0060ce33  MOV EAX,dword ptr [EDX]
0060ce35  MOV ECX,dword ptr [EBP + -0x4]
0060ce38  MOV EDX,dword ptr [EAX + 0x4]
0060ce3b  CALL EDX
0060ce3d  MOV dword ptr [EBP + 0xfffffcf4],EAX
0060ce43  CMP dword ptr [EBP + 0xfffffcf4],0x0
0060ce4a  JZ 0x0060cf3e
0060ce50  MOV dword ptr [EBP + 0xfffffcf0],0x0
0060ce5a  JMP 0x0060ce6b
0060ce5c  MOV EAX,dword ptr [EBP + 0xfffffcf0]
0060ce62  ADD EAX,0x1
0060ce65  MOV dword ptr [EBP + 0xfffffcf0],EAX
0060ce6b  CMP dword ptr [EBP + 0xfffffcf0],0x100
0060ce75  JGE 0x0060cf2c
0060ce7b  MOV ECX,dword ptr [EBP + 0xfffffcf0]
0060ce81  MOV EDX,dword ptr [EBP + 0xfffffcf4]
0060ce87  MOV AL,byte ptr [EDX + ECX*0x4 + 0x1a]
0060ce8b  MOV byte ptr [EBP + 0xfffffcef],AL
0060ce91  MOV ECX,dword ptr [EBP + 0xfffffcf0]
0060ce97  MOV EDX,dword ptr [EBP + 0xfffffcf4]
0060ce9d  MOV EAX,dword ptr [EBP + 0xfffffcf0]
0060cea3  MOV ESI,dword ptr [EBP + 0xfffffcf4]
0060cea9  MOV AL,byte ptr [ESI + EAX*0x4 + 0x18]
0060cead  MOV byte ptr [EDX + ECX*0x4 + 0x1a],AL
0060ceb1  MOV ECX,dword ptr [EBP + 0xfffffcf0]
0060ceb7  MOV EDX,dword ptr [EBP + 0xfffffcf4]
0060cebd  MOV AL,byte ptr [EBP + 0xfffffcef]
0060cec3  MOV byte ptr [EDX + ECX*0x4 + 0x18],AL
0060cec7  MOV ECX,dword ptr [EBP + 0xfffffcf0]
0060cecd  IMUL ECX,ECX,0x3
0060ced0  MOV EDX,dword ptr [EBP + 0xfffffcf0]
0060ced6  MOV EAX,dword ptr [EBP + 0xfffffcf4]
0060cedc  MOV DL,byte ptr [EAX + EDX*0x4 + 0x1a]
0060cee0  MOV byte ptr [EBP + ECX*0x1 + 0xfffffcf8],DL
0060cee7  MOV EAX,dword ptr [EBP + 0xfffffcf0]
0060ceed  IMUL EAX,EAX,0x3
0060cef0  MOV ECX,dword ptr [EBP + 0xfffffcf0]
0060cef6  MOV EDX,dword ptr [EBP + 0xfffffcf4]
0060cefc  MOV CL,byte ptr [EDX + ECX*0x4 + 0x19]
0060cf00  MOV byte ptr [EBP + EAX*0x1 + 0xfffffcf9],CL
0060cf07  MOV EDX,dword ptr [EBP + 0xfffffcf0]
0060cf0d  IMUL EDX,EDX,0x3
0060cf10  MOV EAX,dword ptr [EBP + 0xfffffcf0]
0060cf16  MOV ECX,dword ptr [EBP + 0xfffffcf4]
0060cf1c  MOV AL,byte ptr [ECX + EAX*0x4 + 0x18]
0060cf20  MOV byte ptr [EBP + EDX*0x1 + 0xfffffcfa],AL
0060cf27  JMP 0x0060ce5c
0060cf2c  MOV ECX,dword ptr [EBP + -0x4]
0060cf2f  PUSH ECX
0060cf30  MOV EDX,dword ptr [0x007960d8]
0060cf36  MOV ECX,dword ptr [EDX + 0x18]
0060cf39  CALL 0x006041d0
0060cf3e  POP ESI
0060cf3f  MOV ESP,EBP
0060cf41  POP EBP
0060cf42  RET
