; FUN_0065fca0  0065fca0
0065fca0  PUSH EBP
0065fca1  MOV EBP,ESP
0065fca3  SUB ESP,0x20
0065fca6  MOV dword ptr [EBP + -0x1c],ECX
0065fca9  MOV byte ptr [EBP + -0x1],0x0
0065fcad  MOV EAX,dword ptr [EBP + -0x1c]
0065fcb0  CMP dword ptr [EAX + 0x1cc],0x0
0065fcb7  JZ 0x0065fceb
0065fcb9  MOV ECX,dword ptr [EBP + -0x1c]
0065fcbc  MOV EDX,dword ptr [ECX + 0x1cc]
0065fcc2  MOV dword ptr [EBP + -0xc],EDX
0065fcc5  MOV EAX,dword ptr [EBP + -0xc]
0065fcc8  MOV dword ptr [EBP + -0x8],EAX
0065fccb  CMP dword ptr [EBP + -0x8],0x0
0065fccf  JZ 0x0065fce4
0065fcd1  PUSH 0x1
0065fcd3  MOV ECX,dword ptr [EBP + -0x8]
0065fcd6  MOV EDX,dword ptr [ECX]
0065fcd8  MOV ECX,dword ptr [EBP + -0x8]
0065fcdb  MOV EAX,dword ptr [EDX]
0065fcdd  CALL EAX
0065fcdf  MOV dword ptr [EBP + -0x20],EAX
0065fce2  JMP 0x0065fceb
0065fce4  MOV dword ptr [EBP + -0x20],0x0
0065fceb  MOV ECX,dword ptr [0x0162ee84]
0065fcf1  MOV EDX,dword ptr [ECX]
0065fcf3  MOV ECX,dword ptr [0x0162ee84]
0065fcf9  MOV EAX,dword ptr [EDX + 0x31c]
0065fcff  CALL EAX
0065fd01  MOV ECX,dword ptr [EBP + -0x1c]
0065fd04  MOV dword ptr [ECX + 0x1cc],EAX
0065fd0a  PUSH 0x3
0065fd0c  PUSH 0x0
0065fd0e  MOV EDX,dword ptr [EBP + -0x1c]
0065fd11  MOV ECX,dword ptr [EDX + 0x1cc]
0065fd17  CALL 0x0063a3e0
0065fd1c  MOV EAX,dword ptr [EBP + -0x1c]
0065fd1f  MOV ECX,dword ptr [EAX + 0x1c8]
0065fd25  CALL 0x00660f70
0065fd2a  MOV dword ptr [EBP + -0x14],EAX
0065fd2d  MOV ECX,dword ptr [EBP + -0x1c]
0065fd30  MOV EDX,dword ptr [ECX + 0x1cc]
0065fd36  MOV dword ptr [EBP + -0x10],EDX
0065fd39  MOV EAX,dword ptr [EBP + -0x14]
0065fd3c  PUSH EAX
0065fd3d  MOV ECX,dword ptr [EBP + -0x10]
0065fd40  CALL 0x0063aac0
0065fd45  ADD EAX,0x4
0065fd48  PUSH EAX
0065fd49  CALL 0x00686d8e
0065fd4e  ADD ESP,0x8
0065fd51  MOV ECX,dword ptr [EBP + -0x1c]
0065fd54  CALL 0x0065fde0
0065fd59  MOV ECX,dword ptr [EBP + -0x1c]
0065fd5c  MOV EDX,dword ptr [ECX + 0x1cc]
0065fd62  MOV dword ptr [EBP + -0x18],EDX
0065fd65  MOV EAX,dword ptr [EBP + -0x1c]
0065fd68  ADD EAX,0x1d7
0065fd6d  PUSH EAX
0065fd6e  MOV ECX,dword ptr [EBP + -0x18]
0065fd71  ADD ECX,0x10
0065fd74  PUSH ECX
0065fd75  CALL 0x00686d8e
0065fd7a  ADD ESP,0x8
0065fd7d  MOV EDX,dword ptr [0x0162ee84]
0065fd83  MOV EAX,dword ptr [EDX]
0065fd85  MOV ECX,dword ptr [0x0162ee84]
0065fd8b  MOV EDX,dword ptr [EAX + 0xdc]
0065fd91  CALL EDX
0065fd93  MOVZX EAX,AL
0065fd96  TEST EAX,EAX
0065fd98  JZ 0x0065fdc6
0065fd9a  MOV ECX,dword ptr [EBP + -0x1c]
0065fd9d  MOV EDX,dword ptr [ECX + 0x1cc]
0065fda3  MOV ECX,dword ptr [EDX + 0x24]
0065fda6  CALL 0x0066fdf0
0065fdab  MOV EAX,dword ptr [EBP + -0x1c]
0065fdae  MOV ECX,dword ptr [EAX + 0x1cc]
0065fdb4  PUSH ECX
0065fdb5  MOV EDX,dword ptr [EBP + -0x1c]
0065fdb8  MOV EAX,dword ptr [EDX + 0x1cc]
0065fdbe  MOV ECX,dword ptr [EAX + 0x24]
0065fdc1  CALL 0x0066f960
0065fdc6  MOV ECX,dword ptr [EBP + -0x1c]
0065fdc9  MOV ECX,dword ptr [ECX + 0x1cc]
0065fdcf  CALL 0x0063b0a0
0065fdd4  MOV byte ptr [EBP + -0x1],AL
0065fdd7  MOV AL,byte ptr [EBP + -0x1]
0065fdda  MOV ESP,EBP
0065fddc  POP EBP
0065fddd  RET
