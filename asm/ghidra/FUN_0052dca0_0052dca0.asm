; FUN_0052dca0  0052dca0
0052dca0  PUSH EBP
0052dca1  MOV EBP,ESP
0052dca3  SUB ESP,0x8
0052dca6  MOV dword ptr [EBP + -0x8],ECX
0052dca9  MOV EAX,[0x0079338c]
0052dcae  MOVZX ECX,byte ptr [EAX + 0x7c]
0052dcb2  TEST ECX,ECX
0052dcb4  JZ 0x0052dd3f
0052dcba  MOV EDX,dword ptr [0x0079338c]
0052dcc0  CMP dword ptr [EDX + 0x78],0x64
0052dcc4  JL 0x0052dd3f
0052dcc6  MOV EAX,dword ptr [EBP + -0x8]
0052dcc9  ADD EAX,0x60
0052dccc  PUSH EAX
0052dccd  PUSH ECX
0052dcce  FLD float ptr [0x006b3654]
0052dcd4  FSTP float ptr [ESP]
0052dcd7  PUSH ECX
0052dcd8  FLD1
0052dcda  FSTP float ptr [ESP]
0052dcdd  PUSH 0x4
0052dcdf  PUSH 0xa
0052dce1  PUSH 0x0
0052dce3  PUSH 0x0
0052dce5  PUSH 0x18a95
0052dcea  MOV ECX,dword ptr [0x0162ee84]
0052dcf0  MOV EDX,dword ptr [ECX]
0052dcf2  MOV ECX,dword ptr [0x0162ee84]
0052dcf8  MOV EAX,dword ptr [EDX + 0x80]
0052dcfe  CALL EAX
0052dd00  MOV ECX,dword ptr [EBP + -0x8]
0052dd03  ADD ECX,0x64
0052dd06  PUSH ECX
0052dd07  PUSH ECX
0052dd08  FLD float ptr [0x006b3654]
0052dd0e  FSTP float ptr [ESP]
0052dd11  PUSH ECX
0052dd12  FLD1
0052dd14  FSTP float ptr [ESP]
0052dd17  PUSH 0x16
0052dd19  PUSH 0xa
0052dd1b  PUSH 0x0
0052dd1d  PUSH 0x0
0052dd1f  PUSH 0x18a94
0052dd24  MOV EDX,dword ptr [0x0162ee84]
0052dd2a  MOV EAX,dword ptr [EDX]
0052dd2c  MOV ECX,dword ptr [0x0162ee84]
0052dd32  MOV EDX,dword ptr [EAX + 0x80]
0052dd38  CALL EDX
0052dd3a  JMP 0x0052dde0
0052dd3f  MOV EAX,[0x0079338c]
0052dd44  MOVZX ECX,byte ptr [EAX + 0x7e]
0052dd48  TEST ECX,ECX
0052dd4a  JZ 0x0052dd81
0052dd4c  PUSH 0x0
0052dd4e  PUSH ECX
0052dd4f  FLD float ptr [0x006b3654]
0052dd55  FSTP float ptr [ESP]
0052dd58  PUSH ECX
0052dd59  FLD1
0052dd5b  FSTP float ptr [ESP]
0052dd5e  PUSH 0x1
0052dd60  PUSH 0x5
0052dd62  PUSH 0x0
0052dd64  PUSH 0x0
0052dd66  PUSH 0x30f0ca
0052dd6b  MOV EDX,dword ptr [0x0162ee84]
0052dd71  MOV EAX,dword ptr [EDX]
0052dd73  MOV ECX,dword ptr [0x0162ee84]
0052dd79  MOV EDX,dword ptr [EAX + 0x80]
0052dd7f  CALL EDX
0052dd81  MOV ECX,dword ptr [0x0079338c]
0052dd87  CALL 0x00535e70
0052dd8c  MOV dword ptr [EBP + -0x4],EAX
0052dd8f  CMP dword ptr [EBP + -0x4],-0x1
0052dd93  JNZ 0x0052dd97
0052dd95  JMP 0x0052dde0
0052dd97  CMP dword ptr [EBP + -0x4],0x0
0052dd9b  JG 0x0052dda4
0052dd9d  MOV dword ptr [EBP + -0x4],0x1
0052dda4  MOV EAX,dword ptr [EBP + -0x8]
0052dda7  ADD EAX,0x64
0052ddaa  PUSH EAX
0052ddab  PUSH ECX
0052ddac  FLD float ptr [0x006b3654]
0052ddb2  FSTP float ptr [ESP]
0052ddb5  PUSH ECX
0052ddb6  FLD1
0052ddb8  FSTP float ptr [ESP]
0052ddbb  MOV ECX,dword ptr [EBP + -0x4]
0052ddbe  PUSH ECX
0052ddbf  PUSH 0xa
0052ddc1  PUSH 0x0
0052ddc3  PUSH 0x0
0052ddc5  PUSH 0x18a94
0052ddca  MOV EDX,dword ptr [0x0162ee84]
0052ddd0  MOV EAX,dword ptr [EDX]
0052ddd2  MOV ECX,dword ptr [0x0162ee84]
0052ddd8  MOV EDX,dword ptr [EAX + 0x80]
0052ddde  CALL EDX
0052dde0  MOV ESP,EBP
0052dde2  POP EBP
0052dde3  RET
