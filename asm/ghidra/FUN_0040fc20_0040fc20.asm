; FUN_0040fc20  0040fc20
0040fc20  PUSH EBP
0040fc21  MOV EBP,ESP
0040fc23  SUB ESP,0x24
0040fc26  MOV dword ptr [EBP + -0x1c],ECX
0040fc29  MOV EAX,dword ptr [EBP + 0x8]
0040fc2c  MOVZX ECX,byte ptr [EAX + 0x4]
0040fc30  TEST ECX,ECX
0040fc32  JZ 0x0040fc39
0040fc34  JMP 0x0040fdb1
0040fc39  MOV EDX,dword ptr [0x00790324]
0040fc3f  MOV EAX,dword ptr [EDX + 0x4d0]
0040fc45  MOV dword ptr [EBP + -0x4],EAX
0040fc48  CMP dword ptr [EBP + -0x4],-0x1
0040fc4c  JZ 0x0040fcc9
0040fc4e  MOV ECX,dword ptr [0x00790324]
0040fc54  MOV EDX,dword ptr [ECX + 0x4d0]
0040fc5a  MOV dword ptr [EBP + -0x8],EDX
0040fc5d  CMP dword ptr [EBP + -0x8],0x4
0040fc61  JZ 0x0040fcc9
0040fc63  MOV EAX,[0x00790324]
0040fc68  MOV ECX,dword ptr [EAX + 0x4d0]
0040fc6e  MOV dword ptr [EBP + -0xc],ECX
0040fc71  MOV EDX,dword ptr [EBP + -0xc]
0040fc74  PUSH EDX
0040fc75  CALL 0x005dcb00
0040fc7a  ADD ESP,0x4
0040fc7d  MOV dword ptr [EBP + -0x18],EAX
0040fc80  MOV ECX,dword ptr [EBP + -0x18]
0040fc83  CALL 0x0063aac0
0040fc88  MOV EAX,dword ptr [EAX]
0040fc8a  MOV dword ptr [EBP + -0x10],EAX
0040fc8d  CMP dword ptr [EBP + -0x10],0x2
0040fc91  JZ 0x0040fcaf
0040fc93  MOV ECX,dword ptr [EBP + -0x18]
0040fc96  CALL 0x0063aac0
0040fc9b  MOV ECX,dword ptr [EAX]
0040fc9d  MOV dword ptr [EBP + -0x14],ECX
0040fca0  CMP dword ptr [EBP + -0x14],0x3
0040fca4  JZ 0x0040fcaf
0040fca6  MOV dword ptr [EBP + -0x20],0x0
0040fcad  JMP 0x0040fcb6
0040fcaf  MOV dword ptr [EBP + -0x20],0x1
0040fcb6  MOVZX EDX,byte ptr [EBP + -0x20]
0040fcba  TEST EDX,EDX
0040fcbc  JZ 0x0040fcc9
0040fcbe  MOV EAX,[0x0079032c]
0040fcc3  CMP dword ptr [EAX + 0x34],0x0
0040fcc7  JNZ 0x0040fcce
0040fcc9  JMP 0x0040fdb1
0040fcce  MOV ECX,dword ptr [EBP + 0x8]
0040fcd1  MOV EDX,dword ptr [ECX + 0x18]
0040fcd4  MOV dword ptr [EBP + -0x24],EDX
0040fcd7  CMP dword ptr [EBP + -0x24],0x1
0040fcdb  JZ 0x0040fce8
0040fcdd  CMP dword ptr [EBP + -0x24],0x2
0040fce1  JZ 0x0040fd5e
0040fce3  JMP 0x0040fdb1
0040fce8  MOV EAX,dword ptr [EBP + 0x8]
0040fceb  MOV ECX,dword ptr [EAX + 0x1c]
0040fcee  AND ECX,0x18
0040fcf1  JZ 0x0040fd5c
0040fcf3  MOV EDX,dword ptr [EBP + -0x1c]
0040fcf6  MOV EAX,dword ptr [EDX]
0040fcf8  MOV ECX,dword ptr [EBP + -0x1c]
0040fcfb  MOV EDX,dword ptr [EAX + 0xa8]
0040fd01  CALL EDX
0040fd03  MOVZX EAX,AL
0040fd06  TEST EAX,EAX
0040fd08  JNZ 0x0040fd5c
0040fd0a  MOV ECX,dword ptr [EBP + -0x1c]
0040fd0d  MOV EDX,dword ptr [EBP + 0x8]
0040fd10  MOV EAX,dword ptr [EDX + 0x8]
0040fd13  MOV dword ptr [ECX + 0x48],EAX
0040fd16  MOV ECX,dword ptr [EBP + -0x1c]
0040fd19  MOV EDX,dword ptr [EBP + 0x8]
0040fd1c  MOV EAX,dword ptr [EDX + 0xc]
0040fd1f  MOV dword ptr [ECX + 0x4c],EAX
0040fd22  MOV ECX,dword ptr [EBP + -0x1c]
0040fd25  MOV byte ptr [ECX + 0x8],0x1
0040fd29  MOV EDX,dword ptr [EBP + -0x1c]
0040fd2c  MOV byte ptr [EDX + 0x9],0x1
0040fd30  MOV EAX,dword ptr [EBP + 0x8]
0040fd33  MOV ECX,dword ptr [EAX + 0x1c]
0040fd36  AND ECX,0x8
0040fd39  JZ 0x0040fd47
0040fd3b  MOV EDX,dword ptr [EBP + -0x1c]
0040fd3e  MOV dword ptr [EDX + 0x58],0x8
0040fd45  JMP 0x0040fd5c
0040fd47  MOV EAX,dword ptr [EBP + 0x8]
0040fd4a  MOV ECX,dword ptr [EAX + 0x1c]
0040fd4d  AND ECX,0x10
0040fd50  JZ 0x0040fd5c
0040fd52  MOV EDX,dword ptr [EBP + -0x1c]
0040fd55  MOV dword ptr [EDX + 0x58],0x10
0040fd5c  JMP 0x0040fdb1
0040fd5e  MOV EAX,dword ptr [EBP + 0x8]
0040fd61  MOV ECX,dword ptr [EBP + -0x1c]
0040fd64  MOV EDX,dword ptr [EAX + 0x1c]
0040fd67  AND EDX,dword ptr [ECX + 0x58]
0040fd6a  JZ 0x0040fdb1
0040fd6c  MOV EAX,dword ptr [EBP + -0x1c]
0040fd6f  MOV EDX,dword ptr [EAX]
0040fd71  MOV ECX,dword ptr [EBP + -0x1c]
0040fd74  MOV EAX,dword ptr [EDX + 0xa8]
0040fd7a  CALL EAX
0040fd7c  MOVZX ECX,AL
0040fd7f  TEST ECX,ECX
0040fd81  JZ 0x0040fdb1
0040fd83  MOV EDX,dword ptr [EBP + -0x1c]
0040fd86  MOV EAX,dword ptr [EBP + 0x8]
0040fd89  MOV ECX,dword ptr [EAX + 0x8]
0040fd8c  MOV dword ptr [EDX + 0x50],ECX
0040fd8f  MOV EDX,dword ptr [EBP + -0x1c]
0040fd92  MOV EAX,dword ptr [EBP + 0x8]
0040fd95  MOV ECX,dword ptr [EAX + 0xc]
0040fd98  MOV dword ptr [EDX + 0x54],ECX
0040fd9b  MOV ECX,dword ptr [EBP + -0x1c]
0040fd9e  CALL 0x0040fdc0
0040fda3  MOV EDX,dword ptr [EBP + -0x1c]
0040fda6  MOV byte ptr [EDX + 0x8],0x0
0040fdaa  MOV EAX,dword ptr [EBP + -0x1c]
0040fdad  MOV byte ptr [EAX + 0x9],0x0
0040fdb1  MOV ESP,EBP
0040fdb3  POP EBP
0040fdb4  RET 0x4
