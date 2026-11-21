; FUN_005a7ea0  005a7ea0
005a7ea0  PUSH EBP
005a7ea1  MOV EBP,ESP
005a7ea3  SUB ESP,0x18
005a7ea6  MOV dword ptr [EBP + -0x18],ECX
005a7ea9  MOV ECX,dword ptr [EBP + -0x18]
005a7eac  CALL 0x005a8890
005a7eb1  MOV EAX,[0x00793604]
005a7eb6  MOV ECX,dword ptr [EAX + 0x57c]
005a7ebc  MOV EDX,dword ptr [ECX + 0x808]
005a7ec2  MOV dword ptr [EBP + -0x10],EDX
005a7ec5  MOV EAX,[0x00793604]
005a7eca  MOV ECX,dword ptr [EAX + 0x57c]
005a7ed0  MOV EDX,dword ptr [ECX + 0x80c]
005a7ed6  MOV dword ptr [EBP + -0x14],EDX
005a7ed9  MOV EAX,dword ptr [EBP + -0x14]
005a7edc  SUB EAX,0x1
005a7edf  CMP dword ptr [EBP + -0x10],EAX
005a7ee2  JNZ 0x005a7ef7
005a7ee4  MOV ECX,dword ptr [EBP + -0x18]
005a7ee7  MOV EDX,dword ptr [ECX + 0x44]
005a7eea  MOV EAX,dword ptr [EBP + -0x18]
005a7eed  MOV ECX,dword ptr [EAX + 0x44]
005a7ef0  MOV EDX,dword ptr [EDX]
005a7ef2  MOV EAX,dword ptr [EDX + 0x70]
005a7ef5  CALL EAX
005a7ef7  MOV dword ptr [EBP + -0x4],0x0
005a7efe  JMP 0x005a7f09
005a7f00  MOV ECX,dword ptr [EBP + -0x4]
005a7f03  ADD ECX,0x1
005a7f06  MOV dword ptr [EBP + -0x4],ECX
005a7f09  CMP dword ptr [EBP + -0x4],0x4
005a7f0d  JGE 0x005a7fa6
005a7f13  MOV EDX,dword ptr [EBP + -0x4]
005a7f16  MOV EAX,[0x00793604]
005a7f1b  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x664]
005a7f22  MOV dword ptr [EBP + -0x8],ECX
005a7f25  CMP dword ptr [EBP + -0x8],-0x1
005a7f29  JZ 0x005a7f86
005a7f2b  MOV EDX,dword ptr [0x00793604]
005a7f31  MOVZX EAX,byte ptr [EDX + 0x678]
005a7f38  TEST EAX,EAX
005a7f3a  JNZ 0x005a7f86
005a7f3c  MOV ECX,dword ptr [EBP + -0x8]
005a7f3f  PUSH ECX
005a7f40  MOV ECX,dword ptr [EBP + -0x18]
005a7f43  CALL 0x005a7160
005a7f48  PUSH EAX
005a7f49  MOV EDX,dword ptr [EBP + -0x4]
005a7f4c  MOV EAX,dword ptr [EBP + -0x18]
005a7f4f  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x58]
005a7f53  MOV EDX,dword ptr [EBP + -0x4]
005a7f56  MOV EAX,dword ptr [EBP + -0x18]
005a7f59  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x58]
005a7f5d  MOV EAX,dword ptr [ECX]
005a7f5f  MOV ECX,EDX
005a7f61  MOV EDX,dword ptr [EAX + 0xb0]
005a7f67  CALL EDX
005a7f69  MOV EAX,dword ptr [EBP + -0x4]
005a7f6c  MOV ECX,dword ptr [EBP + -0x18]
005a7f6f  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x58]
005a7f73  MOV EAX,dword ptr [EBP + -0x4]
005a7f76  MOV ECX,dword ptr [EBP + -0x18]
005a7f79  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x58]
005a7f7d  MOV EDX,dword ptr [EDX]
005a7f7f  MOV EAX,dword ptr [EDX + 0x74]
005a7f82  CALL EAX
005a7f84  JMP 0x005a7fa1
005a7f86  MOV ECX,dword ptr [EBP + -0x4]
005a7f89  MOV EDX,dword ptr [EBP + -0x18]
005a7f8c  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x58]
005a7f90  MOV ECX,dword ptr [EBP + -0x4]
005a7f93  MOV EDX,dword ptr [EBP + -0x18]
005a7f96  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x58]
005a7f9a  MOV EAX,dword ptr [EAX]
005a7f9c  MOV EDX,dword ptr [EAX + 0x70]
005a7f9f  CALL EDX
005a7fa1  JMP 0x005a7f00
005a7fa6  MOV dword ptr [EBP + -0xc],0x0
005a7fad  JMP 0x005a7fb8
005a7faf  MOV EAX,dword ptr [EBP + -0xc]
005a7fb2  ADD EAX,0x1
005a7fb5  MOV dword ptr [EBP + -0xc],EAX
005a7fb8  CMP dword ptr [EBP + -0xc],0x5
005a7fbc  JGE 0x005a8096
005a7fc2  MOV ECX,dword ptr [EBP + -0xc]
005a7fc5  MOV EDX,dword ptr [EBP + -0x18]
005a7fc8  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x4]
005a7fcc  CALL 0x005ac460
005a7fd1  CMP dword ptr [EBP + -0xc],0x4
005a7fd5  JZ 0x005a8091
005a7fdb  MOV EAX,dword ptr [EBP + -0xc]
005a7fde  PUSH EAX
005a7fdf  MOV ECX,dword ptr [0x00793604]
005a7fe5  CALL 0x005b60c0
005a7fea  MOVZX ECX,AL
005a7fed  TEST ECX,ECX
005a7fef  JZ 0x005a8091
005a7ff5  MOV ECX,dword ptr [0x00793600]
005a7ffb  CALL 0x005da7b0
005a8000  MOVZX EDX,AL
005a8003  TEST EDX,EDX
005a8005  JZ 0x005a8091
005a800b  MOV EAX,dword ptr [EBP + -0xc]
005a800e  PUSH EAX
005a800f  MOV ECX,dword ptr [0x00793600]
005a8015  MOV EDX,dword ptr [ECX]
005a8017  MOV ECX,dword ptr [0x00793600]
005a801d  MOV EAX,dword ptr [EDX + 0x2c4]
005a8023  CALL EAX
005a8025  MOVZX ECX,AL
005a8028  TEST ECX,ECX
005a802a  JNZ 0x005a8091
005a802c  MOV EDX,dword ptr [EBP + -0xc]
005a802f  MOV EAX,dword ptr [EBP + -0x18]
005a8032  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x18]
005a8036  MOV EDX,dword ptr [EBP + -0xc]
005a8039  IMUL EDX,EDX,0x1e0
005a803f  CMP dword ptr [ECX + EDX*0x1 + 0x17c],0x0
005a8047  JNZ 0x005a8091
005a8049  PUSH 0x0
005a804b  MOV EAX,dword ptr [EBP + -0xc]
005a804e  PUSH EAX
005a804f  MOV ECX,dword ptr [EBP + -0xc]
005a8052  MOV EDX,dword ptr [EBP + -0x18]
005a8055  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x18]
005a8059  MOV ECX,dword ptr [EBP + -0xc]
005a805c  MOV EDX,dword ptr [EBP + -0x18]
005a805f  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x18]
005a8063  MOV EAX,dword ptr [EAX]
005a8065  MOV EDX,dword ptr [EAX + 0xb8]
005a806b  CALL EDX
005a806d  PUSH 0x0
005a806f  MOV EAX,dword ptr [EBP + -0xc]
005a8072  PUSH EAX
005a8073  MOV ECX,dword ptr [EBP + -0xc]
005a8076  MOV EDX,dword ptr [EBP + -0x18]
005a8079  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x48]
005a807d  MOV ECX,dword ptr [EBP + -0xc]
005a8080  MOV EDX,dword ptr [EBP + -0x18]
005a8083  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x48]
005a8087  MOV EAX,dword ptr [EAX]
005a8089  MOV EDX,dword ptr [EAX + 0xb8]
005a808f  CALL EDX
005a8091  JMP 0x005a7faf
005a8096  MOV ECX,dword ptr [0x00793600]
005a809c  CALL 0x005da7b0
005a80a1  MOVZX EAX,AL
005a80a4  TEST EAX,EAX
005a80a6  JZ 0x005a80c7
005a80a8  CMP dword ptr [0x0163068c],0x0
005a80af  JNZ 0x005a80c7
005a80b1  MOV ECX,dword ptr [0x00793600]
005a80b7  MOV EDX,dword ptr [ECX]
005a80b9  MOV ECX,dword ptr [0x00793600]
005a80bf  MOV EAX,dword ptr [EDX + 0x2f0]
005a80c5  CALL EAX
005a80c7  MOV ESP,EBP
005a80c9  POP EBP
005a80ca  RET
