; FUN_0042da90  0042da90
0042da90  PUSH EBP
0042da91  MOV EBP,ESP
0042da93  PUSH -0x1
0042da95  PUSH 0x69e64c
0042da9a  MOV EAX,FS:[0x0]
0042daa0  PUSH EAX
0042daa1  SUB ESP,0x20
0042daa4  MOV EAX,[0x00781870]
0042daa9  XOR EAX,EBP
0042daab  PUSH EAX
0042daac  LEA EAX,[EBP + -0xc]
0042daaf  MOV FS:[0x0],EAX
0042dab5  MOV dword ptr [EBP + -0x24],ECX
0042dab8  MOV EAX,dword ptr [EBP + -0x24]
0042dabb  MOV ECX,dword ptr [EAX + 0x14]
0042dabe  MOV dword ptr [EBP + -0x28],ECX
0042dac1  CMP dword ptr [EBP + -0x28],0x0
0042dac5  JZ 0x0042dad6
0042dac7  CMP dword ptr [EBP + -0x28],0x1
0042dacb  JZ 0x0042db73
0042dad1  JMP 0x0042dc32
0042dad6  PUSH 0x1
0042dad8  MOV EDX,dword ptr [EBP + -0x24]
0042dadb  MOV EAX,dword ptr [EDX]
0042dadd  MOV ECX,dword ptr [EBP + -0x24]
0042dae0  MOV EDX,dword ptr [EAX + 0x4]
0042dae3  CALL EDX
0042dae5  MOV ECX,dword ptr [0x007906dc]
0042daeb  CALL 0x0042a200
0042daf0  MOV dword ptr [EBP + -0x10],0x0
0042daf7  JMP 0x0042db02
0042daf9  MOV EAX,dword ptr [EBP + -0x10]
0042dafc  ADD EAX,0x1
0042daff  MOV dword ptr [EBP + -0x10],EAX
0042db02  CMP dword ptr [EBP + -0x10],0x2
0042db06  JGE 0x0042db6e
0042db08  PUSH 0x24
0042db0a  CALL 0x00686d82
0042db0f  ADD ESP,0x4
0042db12  MOV dword ptr [EBP + -0x20],EAX
0042db15  MOV dword ptr [EBP + -0x4],0x0
0042db1c  CMP dword ptr [EBP + -0x20],0x0
0042db20  JZ 0x0042db40
0042db22  MOV ECX,dword ptr [EBP + -0x10]
0042db25  NEG ECX
0042db27  SBB ECX,ECX
0042db29  NOT ECX
0042db2b  AND ECX,dword ptr [EBP + -0x24]
0042db2e  PUSH ECX
0042db2f  MOV EDX,dword ptr [EBP + -0x10]
0042db32  PUSH EDX
0042db33  MOV ECX,dword ptr [EBP + -0x20]
0042db36  CALL 0x0042d860
0042db3b  MOV dword ptr [EBP + -0x2c],EAX
0042db3e  JMP 0x0042db47
0042db40  MOV dword ptr [EBP + -0x2c],0x0
0042db47  MOV EAX,dword ptr [EBP + -0x2c]
0042db4a  MOV dword ptr [EBP + -0x1c],EAX
0042db4d  MOV dword ptr [EBP + -0x4],0xffffffff
0042db54  MOV ECX,dword ptr [EBP + -0x1c]
0042db57  PUSH ECX
0042db58  MOV EDX,dword ptr [EBP + -0x10]
0042db5b  MOV EAX,[0x007906dc]
0042db60  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x148]
0042db67  CALL 0x005f5d50
0042db6c  JMP 0x0042daf9
0042db6e  JMP 0x0042dc4d
0042db73  MOV ECX,dword ptr [0x007906d4]
0042db79  CALL 0x00434390
0042db7e  MOVZX ECX,AL
0042db81  TEST ECX,ECX
0042db83  JZ 0x0042db90
0042db85  MOV ECX,dword ptr [0x007906dc]
0042db8b  CALL 0x0042a160
0042db90  MOV EDX,dword ptr [0x007906dc]
0042db96  MOV EAX,dword ptr [EDX + 0x164]
0042db9c  MOV ECX,dword ptr [0x007906dc]
0042dba2  MOV ECX,dword ptr [ECX + 0x164]
0042dba8  MOV EDX,dword ptr [EAX]
0042dbaa  MOV EAX,dword ptr [EDX + 0x70]
0042dbad  CALL EAX
0042dbaf  PUSH 0x0
0042dbb1  MOV ECX,dword ptr [0x007906dc]
0042dbb7  MOV ECX,dword ptr [ECX + 0x164]
0042dbbd  CALL 0x005f5d50
0042dbc2  PUSH 0x0
0042dbc4  PUSH 0x1
0042dbc6  MOV EDX,dword ptr [0x007906d0]
0042dbcc  MOV EAX,dword ptr [EDX + 0x4]
0042dbcf  MOV ECX,dword ptr [0x007906d0]
0042dbd5  MOV ECX,dword ptr [ECX + 0x4]
0042dbd8  MOV EDX,dword ptr [EAX]
0042dbda  MOV EAX,dword ptr [EDX + 0x8]
0042dbdd  CALL EAX
0042dbdf  PUSH 0x0
0042dbe1  MOV ECX,dword ptr [0x007906d0]
0042dbe7  MOV ECX,dword ptr [ECX + 0x4]
0042dbea  CALL 0x005fc420
0042dbef  MOV EDX,dword ptr [0x007906d4]
0042dbf5  MOV EAX,dword ptr [EDX + 0xab4]
0042dbfb  MOV dword ptr [EBP + -0x18],EAX
0042dbfe  CMP dword ptr [EBP + -0x18],0x0
0042dc02  JL 0x0042dc0a
0042dc04  CMP dword ptr [EBP + -0x18],0x4
0042dc08  JL 0x0042dc0c
0042dc0a  JMP 0x0042dc4d
0042dc0c  MOV ECX,dword ptr [0x007906d4]
0042dc12  MOV EDX,dword ptr [ECX + 0xabc]
0042dc18  MOV dword ptr [EBP + -0x14],EDX
0042dc1b  MOV EAX,dword ptr [EBP + -0x14]
0042dc1e  PUSH EAX
0042dc1f  PUSH 0x8
0042dc21  MOV ECX,dword ptr [EBP + -0x18]
0042dc24  PUSH ECX
0042dc25  MOV ECX,dword ptr [0x0079506c]
0042dc2b  CALL 0x005e7e00
0042dc30  JMP 0x0042dc4d
0042dc32  XOR EDX,EDX
0042dc34  JNZ 0x0042dc4d
0042dc36  PUSH 0x628
0042dc3b  PUSH 0x6b6c70
0042dc40  PUSH 0x6b2f58
0042dc45  CALL 0x005e9f20
0042dc4a  ADD ESP,0xc
0042dc4d  MOV ECX,dword ptr [EBP + -0xc]
0042dc50  MOV dword ptr FS:[0x0],ECX
0042dc57  POP ECX
0042dc58  MOV ESP,EBP
0042dc5a  POP EBP
0042dc5b  RET
