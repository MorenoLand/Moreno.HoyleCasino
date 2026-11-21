; FUN_0042bcc0  0042bcc0
0042bcc0  PUSH EBP
0042bcc1  MOV EBP,ESP
0042bcc3  SUB ESP,0x10
0042bcc6  MOV dword ptr [EBP + -0xc],ECX
0042bcc9  MOV byte ptr [EBP + -0x5],0x0
0042bccd  PUSH 0x1
0042bccf  MOV EAX,[0x0162ee80]
0042bcd4  MOV ECX,dword ptr [EAX + 0x4]
0042bcd7  MOV EDX,dword ptr [0x0162ee80]
0042bcdd  MOV EAX,dword ptr [EDX + 0x4]
0042bce0  MOV EDX,dword ptr [ECX]
0042bce2  MOV ECX,EAX
0042bce4  MOV EAX,dword ptr [EDX + 0x4]
0042bce7  CALL EAX
0042bce9  MOV dword ptr [EBP + -0x4],0x0
0042bcf0  JMP 0x0042bcfb
0042bcf2  MOV ECX,dword ptr [EBP + -0x4]
0042bcf5  ADD ECX,0x1
0042bcf8  MOV dword ptr [EBP + -0x4],ECX
0042bcfb  CMP dword ptr [EBP + -0x4],0x4
0042bcff  JGE 0x0042bd6d
0042bd01  MOV EDX,dword ptr [EBP + -0x4]
0042bd04  PUSH EDX
0042bd05  CALL 0x005dcb00
0042bd0a  ADD ESP,0x4
0042bd0d  CMP dword ptr [EAX + 0x49c],0x0
0042bd14  JZ 0x0042bd6b
0042bd16  MOV EAX,dword ptr [EBP + -0x4]
0042bd19  PUSH EAX
0042bd1a  CALL 0x005dcb00
0042bd1f  ADD ESP,0x4
0042bd22  MOV ECX,dword ptr [EAX + 0x49c]
0042bd28  CALL 0x005f54a0
0042bd2d  MOVZX ECX,AL
0042bd30  TEST ECX,ECX
0042bd32  JZ 0x0042bd6b
0042bd34  MOVZX EDX,byte ptr [EBP + -0x5]
0042bd38  TEST EDX,EDX
0042bd3a  JZ 0x0042bd45
0042bd3c  MOV dword ptr [EBP + -0x10],0x0
0042bd43  JMP 0x0042bd50
0042bd45  MOV EAX,[0x0162ee80]
0042bd4a  MOV ECX,dword ptr [EAX + 0x4]
0042bd4d  MOV dword ptr [EBP + -0x10],ECX
0042bd50  MOV EDX,dword ptr [EBP + -0x10]
0042bd53  PUSH EDX
0042bd54  MOV EAX,dword ptr [EBP + -0x4]
0042bd57  PUSH EAX
0042bd58  CALL 0x005dcb00
0042bd5d  ADD ESP,0x4
0042bd60  MOV ECX,EAX
0042bd62  CALL 0x005d6980
0042bd67  MOV byte ptr [EBP + -0x5],0x1
0042bd6b  JMP 0x0042bcf2
0042bd6d  MOVZX ECX,byte ptr [EBP + -0x5]
0042bd71  TEST ECX,ECX
0042bd73  JNZ 0x0042bd90
0042bd75  PUSH 0x0
0042bd77  MOV EDX,dword ptr [0x0162ee80]
0042bd7d  MOV EAX,dword ptr [EDX + 0x4]
0042bd80  MOV ECX,dword ptr [0x0162ee80]
0042bd86  MOV ECX,dword ptr [ECX + 0x4]
0042bd89  MOV EDX,dword ptr [EAX]
0042bd8b  MOV EAX,dword ptr [EDX + 0x1c]
0042bd8e  CALL EAX
0042bd90  MOV ESP,EBP
0042bd92  POP EBP
0042bd93  RET
