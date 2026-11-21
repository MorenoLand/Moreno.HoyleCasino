; FUN_0042cc30  0042cc30
0042cc30  PUSH EBP
0042cc31  MOV EBP,ESP
0042cc33  PUSH -0x1
0042cc35  PUSH 0x69e5da
0042cc3a  MOV EAX,FS:[0x0]
0042cc40  PUSH EAX
0042cc41  SUB ESP,0x14
0042cc44  PUSH ESI
0042cc45  MOV EAX,[0x00781870]
0042cc4a  XOR EAX,EBP
0042cc4c  PUSH EAX
0042cc4d  LEA EAX,[EBP + -0xc]
0042cc50  MOV FS:[0x0],EAX
0042cc56  MOV dword ptr [EBP + -0x1c],ECX
0042cc59  MOV EAX,dword ptr [EBP + 0xc]
0042cc5c  PUSH EAX
0042cc5d  MOV ECX,dword ptr [EBP + 0x8]
0042cc60  PUSH ECX
0042cc61  MOV ECX,dword ptr [EBP + -0x1c]
0042cc64  CALL 0x005cc540
0042cc69  MOV EDX,dword ptr [EBP + 0xc]
0042cc6c  PUSH EDX
0042cc6d  MOV EAX,dword ptr [EBP + 0x8]
0042cc70  PUSH EAX
0042cc71  MOV ECX,dword ptr [EBP + -0x1c]
0042cc74  CALL 0x005ccdf0
0042cc79  MOV dword ptr [EBP + -0x10],EAX
0042cc7c  MOV ECX,dword ptr [EBP + 0xc]
0042cc7f  PUSH ECX
0042cc80  MOV EDX,dword ptr [EBP + 0x8]
0042cc83  PUSH EDX
0042cc84  MOV ECX,dword ptr [EBP + -0x1c]
0042cc87  CALL 0x0042c940
0042cc8c  MOVZX EAX,AL
0042cc8f  TEST EAX,EAX
0042cc91  JZ 0x0042ce79
0042cc97  CMP dword ptr [EBP + -0x10],-0x1
0042cc9b  JNZ 0x0042cca2
0042cc9d  JMP 0x0042cea0
0042cca2  MOV ECX,dword ptr [EBP + 0x8]
0042cca5  MOV EDX,dword ptr [EBP + -0x1c]
0042cca8  CMP dword ptr [EDX + ECX*0x4 + 0xaec],0x0
0042ccb0  JNZ 0x0042cd00
0042ccb2  PUSH 0x178
0042ccb7  CALL 0x00686d82
0042ccbc  ADD ESP,0x4
0042ccbf  MOV dword ptr [EBP + -0x18],EAX
0042ccc2  MOV dword ptr [EBP + -0x4],0x0
0042ccc9  CMP dword ptr [EBP + -0x18],0x0
0042cccd  JZ 0x0042ccdc
0042cccf  MOV ECX,dword ptr [EBP + -0x18]
0042ccd2  CALL 0x005eaaf0
0042ccd7  MOV dword ptr [EBP + -0x20],EAX
0042ccda  JMP 0x0042cce3
0042ccdc  MOV dword ptr [EBP + -0x20],0x0
0042cce3  MOV EAX,dword ptr [EBP + -0x20]
0042cce6  MOV dword ptr [EBP + -0x14],EAX
0042cce9  MOV dword ptr [EBP + -0x4],0xffffffff
0042ccf0  MOV ECX,dword ptr [EBP + 0x8]
0042ccf3  MOV EDX,dword ptr [EBP + -0x1c]
0042ccf6  MOV EAX,dword ptr [EBP + -0x14]
0042ccf9  MOV dword ptr [EDX + ECX*0x4 + 0xaec],EAX
0042cd00  MOV ECX,dword ptr [EBP + -0x1c]
0042cd03  CALL 0x005cc2e0
0042cd08  MOV ECX,EAX
0042cd0a  CALL 0x005f5400
0042cd0f  XOR ECX,ECX
0042cd11  CMP EAX,0x37
0042cd14  SETGE CL
0042cd17  ADD ECX,0xfaf
0042cd1d  PUSH ECX
0042cd1e  MOV EDX,dword ptr [EBP + 0x8]
0042cd21  MOV EAX,dword ptr [EBP + -0x1c]
0042cd24  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xaec]
0042cd2b  CALL 0x005eaf00
0042cd30  MOV ECX,dword ptr [EBP + 0x8]
0042cd33  MOV EDX,dword ptr [EBP + -0x1c]
0042cd36  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xaec]
0042cd3d  MOV ECX,dword ptr [EBP + 0x8]
0042cd40  MOV EDX,dword ptr [EBP + -0x1c]
0042cd43  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xaec]
0042cd4a  MOV EAX,dword ptr [EAX]
0042cd4c  MOV EDX,dword ptr [EAX + 0x40]
0042cd4f  CALL EDX
0042cd51  MOV EAX,dword ptr [EBP + 0x8]
0042cd54  IMUL EAX,EAX,0x1e0
0042cd5a  MOV ECX,dword ptr [EBP + -0x1c]
0042cd5d  LEA EDX,[ECX + EAX*0x1 + 0x17c]
0042cd64  MOV EAX,dword ptr [EBP + 0xc]
0042cd67  IMUL EAX,EAX,0x78
0042cd6a  ADD EDX,EAX
0042cd6c  MOV ECX,dword ptr [EBP + -0x10]
0042cd6f  MOV EDX,dword ptr [EDX + ECX*0x4]
0042cd72  MOV EAX,dword ptr [EBP + 0xc]
0042cd75  IMUL EAX,EAX,0x78
0042cd78  MOV ECX,dword ptr [EBP + 0x8]
0042cd7b  IMUL ECX,ECX,0x1e0
0042cd81  MOV ESI,dword ptr [EBP + -0x1c]
0042cd84  LEA ECX,[ESI + ECX*0x1 + 0x17c]
0042cd8b  ADD ECX,EAX
0042cd8d  MOV EAX,dword ptr [EBP + -0x10]
0042cd90  MOV ECX,dword ptr [ECX + EAX*0x4]
0042cd93  MOV EDX,dword ptr [EDX]
0042cd95  MOV EAX,dword ptr [EDX + 0x54]
0042cd98  CALL EAX
0042cd9a  PUSH EAX
0042cd9b  MOV ECX,dword ptr [EBP + 0x8]
0042cd9e  IMUL ECX,ECX,0x1e0
0042cda4  MOV EDX,dword ptr [EBP + -0x1c]
0042cda7  LEA EAX,[EDX + ECX*0x1 + 0x17c]
0042cdae  MOV ECX,dword ptr [EBP + 0xc]
0042cdb1  IMUL ECX,ECX,0x78
0042cdb4  ADD EAX,ECX
0042cdb6  MOV EDX,dword ptr [EBP + -0x10]
0042cdb9  MOV EAX,dword ptr [EAX + EDX*0x4]
0042cdbc  MOV ECX,dword ptr [EBP + 0xc]
0042cdbf  IMUL ECX,ECX,0x78
0042cdc2  MOV EDX,dword ptr [EBP + 0x8]
0042cdc5  IMUL EDX,EDX,0x1e0
0042cdcb  MOV ESI,dword ptr [EBP + -0x1c]
0042cdce  LEA EDX,[ESI + EDX*0x1 + 0x17c]
0042cdd5  ADD EDX,ECX
0042cdd7  MOV ECX,dword ptr [EBP + -0x10]
0042cdda  MOV ECX,dword ptr [EDX + ECX*0x4]
0042cddd  MOV EDX,dword ptr [EAX]
0042cddf  MOV EAX,dword ptr [EDX + 0x4c]
0042cde2  CALL EAX
0042cde4  ADD EAX,0x2
0042cde7  PUSH EAX
0042cde8  MOV ECX,dword ptr [EBP + 0x8]
0042cdeb  MOV EDX,dword ptr [EBP + -0x1c]
0042cdee  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xaec]
0042cdf5  MOV ECX,dword ptr [EBP + 0x8]
0042cdf8  MOV EDX,dword ptr [EBP + -0x1c]
0042cdfb  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xaec]
0042ce02  MOV EAX,dword ptr [EAX]
0042ce04  MOV EDX,dword ptr [EAX + 0x44]
0042ce07  CALL EDX
0042ce09  MOV EAX,dword ptr [EBP + 0x8]
0042ce0c  IMUL EAX,EAX,0x1e0
0042ce12  MOV ECX,dword ptr [EBP + -0x1c]
0042ce15  LEA EDX,[ECX + EAX*0x1 + 0x17c]
0042ce1c  MOV EAX,dword ptr [EBP + 0xc]
0042ce1f  IMUL EAX,EAX,0x78
0042ce22  ADD EDX,EAX
0042ce24  MOV ECX,dword ptr [EBP + -0x10]
0042ce27  MOV ECX,dword ptr [EDX + ECX*0x4]
0042ce2a  CALL 0x005f53c0
0042ce2f  ADD EAX,0x1
0042ce32  PUSH EAX
0042ce33  MOV EDX,dword ptr [EBP + 0x8]
0042ce36  MOV EAX,dword ptr [EBP + -0x1c]
0042ce39  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xaec]
0042ce40  MOV EDX,dword ptr [EBP + 0x8]
0042ce43  MOV EAX,dword ptr [EBP + -0x1c]
0042ce46  MOV EDX,dword ptr [EAX + EDX*0x4 + 0xaec]
0042ce4d  MOV EAX,dword ptr [ECX]
0042ce4f  MOV ECX,EDX
0042ce51  MOV EDX,dword ptr [EAX + 0x6c]
0042ce54  CALL EDX
0042ce56  MOV EAX,dword ptr [EBP + 0x8]
0042ce59  MOV ECX,dword ptr [EBP + -0x1c]
0042ce5c  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xaec]
0042ce63  MOV EAX,dword ptr [EBP + 0x8]
0042ce66  MOV ECX,dword ptr [EBP + -0x1c]
0042ce69  MOV ECX,dword ptr [ECX + EAX*0x4 + 0xaec]
0042ce70  MOV EDX,dword ptr [EDX]
0042ce72  MOV EAX,dword ptr [EDX + 0x74]
0042ce75  CALL EAX
0042ce77  JMP 0x0042cea0
0042ce79  MOV ECX,dword ptr [EBP + 0xc]
0042ce7c  PUSH ECX
0042ce7d  MOV EDX,dword ptr [EBP + 0x8]
0042ce80  PUSH EDX
0042ce81  MOV ECX,dword ptr [EBP + -0x1c]
0042ce84  CALL 0x0042c9c0
0042ce89  MOVZX EAX,AL
0042ce8c  TEST EAX,EAX
0042ce8e  JZ 0x0042cea0
0042ce90  MOV ECX,dword ptr [EBP + 0xc]
0042ce93  PUSH ECX
0042ce94  MOV EDX,dword ptr [EBP + 0x8]
0042ce97  PUSH EDX
0042ce98  MOV ECX,dword ptr [EBP + -0x1c]
0042ce9b  CALL 0x0042ca40
0042cea0  MOV ECX,dword ptr [EBP + -0xc]
0042cea3  MOV dword ptr FS:[0x0],ECX
0042ceaa  POP ECX
0042ceab  POP ESI
0042ceac  MOV ESP,EBP
0042ceae  POP EBP
0042ceaf  RET 0x8
