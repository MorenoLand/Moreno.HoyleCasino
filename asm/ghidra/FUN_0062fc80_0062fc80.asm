; FUN_0062fc80  0062fc80
0062fc80  PUSH EBP
0062fc81  MOV EBP,ESP
0062fc83  PUSH ECX
0062fc84  MOV EAX,dword ptr [EBP + 0x10]
0062fc87  CMP EAX,dword ptr [EBP + 0x8]
0062fc8a  JL 0x0062fcd3
0062fc8c  MOV ECX,dword ptr [EBP + 0x10]
0062fc8f  CMP ECX,dword ptr [EBP + 0xc]
0062fc92  JG 0x0062fcd3
0062fc94  MOV EDX,dword ptr [EBP + 0xc]
0062fc97  PUSH EDX
0062fc98  MOV EAX,dword ptr [EBP + 0x8]
0062fc9b  PUSH EAX
0062fc9c  CALL 0x0062fc30
0062fca1  ADD ESP,0x8
0062fca4  MOV dword ptr [EBP + -0x4],EAX
0062fca7  MOV ECX,dword ptr [EBP + 0xc]
0062fcaa  CMP ECX,dword ptr [EBP + 0x8]
0062fcad  JLE 0x0062fccc
0062fcaf  MOV EDX,dword ptr [EBP + -0x4]
0062fcb2  CMP EDX,dword ptr [EBP + 0x10]
0062fcb5  JNZ 0x0062fccc
0062fcb7  MOV EAX,dword ptr [EBP + 0xc]
0062fcba  PUSH EAX
0062fcbb  MOV ECX,dword ptr [EBP + 0x8]
0062fcbe  PUSH ECX
0062fcbf  CALL 0x0062fc30
0062fcc4  ADD ESP,0x8
0062fcc7  MOV dword ptr [EBP + -0x4],EAX
0062fcca  JMP 0x0062fca7
0062fccc  MOV EAX,dword ptr [EBP + -0x4]
0062fccf  JMP 0x0062fced
0062fcd3  XOR EDX,EDX
0062fcd5  JNZ 0x0062fceb
0062fcd7  PUSH 0x42
0062fcd9  PUSH 0x6d9d04
0062fcde  PUSH 0x6b2f58
0062fce3  CALL 0x005e9f20
0062fce8  ADD ESP,0xc
0062fceb  XOR EAX,EAX
0062fced  MOV ESP,EBP
0062fcef  POP EBP
0062fcf0  RET
