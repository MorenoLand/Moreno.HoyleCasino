; FUN_005f39c0  005f39c0
005f39c0  PUSH EBP
005f39c1  MOV EBP,ESP
005f39c3  SUB ESP,0x94
005f39c9  MOV EAX,[0x00781870]
005f39ce  XOR EAX,EBP
005f39d0  MOV dword ptr [EBP + -0x4],EAX
005f39d3  MOV dword ptr [EBP + 0xffffff70],ECX
005f39d9  MOV EAX,dword ptr [EBP + 0xffffff70]
005f39df  MOV CL,byte ptr [EAX + 0x25]
005f39e2  MOV byte ptr [EBP + 0xffffff77],CL
005f39e8  MOVZX EDX,byte ptr [EBP + 0xffffff77]
005f39ef  TEST EDX,EDX
005f39f1  JZ 0x005f3a04
005f39f3  MOV EAX,dword ptr [EBP + 0xffffff70]
005f39f9  MOV byte ptr [EAX + 0x26],0x1
005f39fd  MOV AL,0x1
005f39ff  JMP 0x005f3b12
005f3a04  MOV ECX,dword ptr [EBP + 0xffffff70]
005f3a0a  MOVZX EDX,byte ptr [ECX + 0x24]
005f3a0e  TEST EDX,EDX
005f3a10  JNZ 0x005f3a1a
005f3a12  MOVZX EAX,byte ptr [EBP + 0x8]
005f3a16  TEST EAX,EAX
005f3a18  JZ 0x005f3a29
005f3a1a  MOV ECX,dword ptr [EBP + 0xffffff70]
005f3a20  MOV byte ptr [ECX + 0x24],0x1
005f3a24  JMP 0x005f3ac4
005f3a29  PUSH 0x1
005f3a2b  MOV EDX,dword ptr [EBP + 0xffffff70]
005f3a31  MOV EAX,dword ptr [EDX]
005f3a33  MOV ECX,dword ptr [EBP + 0xffffff70]
005f3a39  MOV EDX,dword ptr [EAX + 0x30]
005f3a3c  CALL EDX
005f3a3e  PUSH 0x795634
005f3a43  MOV EAX,dword ptr [EBP + 0xffffff70]
005f3a49  MOV EDX,dword ptr [EAX]
005f3a4b  MOV ECX,dword ptr [EBP + 0xffffff70]
005f3a51  MOV EAX,dword ptr [EDX + 0x24]
005f3a54  CALL EAX
005f3a56  PUSH EAX
005f3a57  LEA ECX,[EBP + 0xffffff78]
005f3a5d  PUSH ECX
005f3a5e  CALL dword ptr [0x006b2220]
005f3a64  ADD ESP,0xc
005f3a67  PUSH 0x4
005f3a69  MOV EDX,dword ptr [EBP + 0xffffff70]
005f3a6f  MOV EAX,dword ptr [EDX]
005f3a71  MOV ECX,dword ptr [EBP + 0xffffff70]
005f3a77  MOV EDX,dword ptr [EAX + 0x28]
005f3a7a  CALL EDX
005f3a7c  PUSH EAX
005f3a7d  LEA EAX,[EBP + 0xffffff78]
005f3a83  PUSH EAX
005f3a84  CALL 0x0062ff10
005f3a89  ADD ESP,0xc
005f3a8c  CMP EAX,0x6
005f3a8f  JNZ 0x005f3ac4
005f3a91  MOV ECX,dword ptr [EBP + 0xffffff70]
005f3a97  CMP dword ptr [ECX + 0x34],0x44c
005f3a9e  JZ 0x005f3aba
005f3aa0  PUSH 0x44c
005f3aa5  MOV EDX,dword ptr [EBP + 0xffffff70]
005f3aab  MOV EAX,dword ptr [EDX]
005f3aad  MOV ECX,dword ptr [EBP + 0xffffff70]
005f3ab3  MOV EDX,dword ptr [EAX + 0x34]
005f3ab6  CALL EDX
005f3ab8  JMP 0x005f3ac4
005f3aba  MOV EAX,dword ptr [EBP + 0xffffff70]
005f3ac0  MOV byte ptr [EAX + 0x24],0x1
005f3ac4  PUSH 0x0
005f3ac6  MOV ECX,dword ptr [EBP + 0xffffff70]
005f3acc  MOV EDX,dword ptr [ECX]
005f3ace  MOV ECX,dword ptr [EBP + 0xffffff70]
005f3ad4  MOV EAX,dword ptr [EDX + 0x30]
005f3ad7  CALL EAX
005f3ad9  MOV ECX,dword ptr [EBP + 0xffffff70]
005f3adf  MOVZX EDX,byte ptr [ECX + 0x24]
005f3ae3  TEST EDX,EDX
005f3ae5  JNZ 0x005f3b02
005f3ae7  MOV EAX,dword ptr [EBP + 0xffffff70]
005f3aed  CMP dword ptr [EAX + 0x2c],0x44c
005f3af4  JZ 0x005f3b02
005f3af6  MOV dword ptr [EBP + 0xffffff6c],0x0
005f3b00  JMP 0x005f3b0c
005f3b02  MOV dword ptr [EBP + 0xffffff6c],0x1
005f3b0c  MOV AL,byte ptr [EBP + 0xffffff6c]
005f3b12  MOV ECX,dword ptr [EBP + -0x4]
005f3b15  XOR ECX,EBP
005f3b17  CALL 0x00686d72
005f3b1c  MOV ESP,EBP
005f3b1e  POP EBP
005f3b1f  RET 0x4
