; FUN_005f7e80  005f7e80
005f7e80  PUSH EBP
005f7e81  MOV EBP,ESP
005f7e83  SUB ESP,0x24
005f7e86  PUSH ESI
005f7e87  MOV dword ptr [EBP + -0x1c],ECX
005f7e8a  CMP dword ptr [EBP + -0x1c],0x0
005f7e8e  JNZ 0x005f7ead
005f7e90  XOR EAX,EAX
005f7e92  JNZ 0x005f7ea8
005f7e94  PUSH 0x68
005f7e96  PUSH 0x6d6d10
005f7e9b  PUSH 0x6b2f58
005f7ea0  CALL 0x005e9f20
005f7ea5  ADD ESP,0xc
005f7ea8  JMP 0x005f832d
005f7ead  MOV EDX,dword ptr [EBP + 0x8]
005f7eb0  CMP dword ptr [EDX + 0x18],0x3
005f7eb4  JNZ 0x005f7ed4
005f7eb6  MOV EAX,dword ptr [EBP + -0x1c]
005f7eb9  MOV ECX,dword ptr [EBP + 0x8]
005f7ebc  MOV EDX,dword ptr [ECX + 0x8]
005f7ebf  MOV dword ptr [EAX + 0x128],EDX
005f7ec5  MOV EAX,dword ptr [EBP + -0x1c]
005f7ec8  MOV ECX,dword ptr [EBP + 0x8]
005f7ecb  MOV EDX,dword ptr [ECX + 0xc]
005f7ece  MOV dword ptr [EAX + 0x12c],EDX
005f7ed4  MOV ECX,dword ptr [EBP + -0x1c]
005f7ed7  CALL 0x005f88f0
005f7edc  MOVZX EAX,AL
005f7edf  TEST EAX,EAX
005f7ee1  JZ 0x005f7ee8
005f7ee3  JMP 0x005f832d
005f7ee8  MOV ECX,dword ptr [EBP + -0x1c]
005f7eeb  CMP dword ptr [ECX + 0x16c],0x0
005f7ef2  JZ 0x005f7f56
005f7ef4  MOV EDX,dword ptr [EBP + -0x1c]
005f7ef7  MOV EAX,dword ptr [EDX + 0x16c]
005f7efd  PUSH EAX
005f7efe  MOV ECX,dword ptr [EBP + -0x1c]
005f7f01  ADD ECX,0x13c
005f7f07  CALL 0x0060c9e0
005f7f0c  MOVZX ECX,AL
005f7f0f  TEST ECX,ECX
005f7f11  JZ 0x005f7f34
005f7f13  MOV EDX,dword ptr [EBP + 0x8]
005f7f16  PUSH EDX
005f7f17  MOV EAX,dword ptr [EBP + -0x1c]
005f7f1a  MOV ECX,dword ptr [EAX + 0x16c]
005f7f20  MOV EDX,dword ptr [EBP + -0x1c]
005f7f23  MOV EAX,dword ptr [EDX + 0x16c]
005f7f29  MOV EDX,dword ptr [ECX]
005f7f2b  MOV ECX,EAX
005f7f2d  MOV EAX,dword ptr [EDX + 0x3c]
005f7f30  CALL EAX
005f7f32  JMP 0x005f7f56
005f7f34  XOR ECX,ECX
005f7f36  JNZ 0x005f7f4c
005f7f38  PUSH 0x77
005f7f3a  PUSH 0x6d6d10
005f7f3f  PUSH 0x6b2f58
005f7f44  CALL 0x005e9f20
005f7f49  ADD ESP,0xc
005f7f4c  PUSH 0x0
005f7f4e  MOV ECX,dword ptr [EBP + -0x1c]
005f7f51  CALL 0x005f89f0
005f7f56  MOV ECX,dword ptr [EBP + -0x1c]
005f7f59  ADD ECX,0x13c
005f7f5f  CALL 0x0060c9a0
005f7f64  MOV ECX,dword ptr [EBP + -0x1c]
005f7f67  CMP dword ptr [ECX + 0x150],EAX
005f7f6d  JGE 0x005f8005
005f7f73  MOV EDX,dword ptr [EBP + -0x1c]
005f7f76  CMP dword ptr [EDX + 0x14c],0x0
005f7f7d  JZ 0x005f7f97
005f7f7f  MOV EAX,dword ptr [EBP + -0x1c]
005f7f82  MOV ECX,dword ptr [EAX + 0x14c]
005f7f88  MOV dword ptr [EBP + -0x14],ECX
005f7f8b  MOV EDX,dword ptr [EBP + -0x14]
005f7f8e  PUSH EDX
005f7f8f  CALL 0x00686cae
005f7f94  ADD ESP,0x4
005f7f97  MOV ECX,dword ptr [EBP + -0x1c]
005f7f9a  ADD ECX,0x13c
005f7fa0  CALL 0x0060c9a0
005f7fa5  SHL EAX,0x1
005f7fa7  CMP EAX,0x14
005f7faa  JGE 0x005f7fb5
005f7fac  MOV dword ptr [EBP + -0x20],0x14
005f7fb3  JMP 0x005f7fc8
005f7fb5  MOV ECX,dword ptr [EBP + -0x1c]
005f7fb8  ADD ECX,0x13c
005f7fbe  CALL 0x0060c9a0
005f7fc3  SHL EAX,0x1
005f7fc5  MOV dword ptr [EBP + -0x20],EAX
005f7fc8  MOV EAX,dword ptr [EBP + -0x1c]
005f7fcb  MOV ECX,dword ptr [EBP + -0x20]
005f7fce  MOV dword ptr [EAX + 0x150],ECX
005f7fd4  XOR ECX,ECX
005f7fd6  MOV EDX,dword ptr [EBP + -0x1c]
005f7fd9  MOV EAX,dword ptr [EDX + 0x150]
005f7fdf  MOV EDX,0x4
005f7fe4  MUL EDX
005f7fe6  SETO CL
005f7fe9  NEG ECX
005f7feb  OR ECX,EAX
005f7fed  PUSH ECX
005f7fee  CALL 0x00686d82
005f7ff3  ADD ESP,0x4
005f7ff6  MOV dword ptr [EBP + -0x18],EAX
005f7ff9  MOV EAX,dword ptr [EBP + -0x1c]
005f7ffc  MOV ECX,dword ptr [EBP + -0x18]
005f7fff  MOV dword ptr [EAX + 0x14c],ECX
005f8005  MOV dword ptr [EBP + -0x4],0x0
005f800c  MOV EDX,dword ptr [EBP + -0x1c]
005f800f  MOV dword ptr [EDX + 0x154],0x0
005f8019  JMP 0x005f8024
005f801b  MOV EAX,dword ptr [EBP + -0x4]
005f801e  ADD EAX,0x1
005f8021  MOV dword ptr [EBP + -0x4],EAX
005f8024  MOV ECX,dword ptr [EBP + -0x1c]
005f8027  ADD ECX,0x13c
005f802d  CALL 0x0060c9a0
005f8032  CMP dword ptr [EBP + -0x4],EAX
005f8035  JGE 0x005f80aa
005f8037  PUSH 0x0
005f8039  PUSH 0x7050f4
005f803e  PUSH 0x70501c
005f8043  PUSH 0x0
005f8045  MOV ECX,dword ptr [EBP + -0x4]
005f8048  PUSH ECX
005f8049  MOV ECX,dword ptr [EBP + -0x1c]
005f804c  ADD ECX,0x13c
005f8052  CALL 0x0060ca40
005f8057  PUSH EAX
005f8058  CALL 0x00686ede
005f805d  ADD ESP,0x14
005f8060  MOV dword ptr [EBP + -0x10],EAX
005f8063  CMP dword ptr [EBP + -0x10],0x0
005f8067  JZ 0x005f80a5
005f8069  MOV ECX,dword ptr [EBP + -0x10]
005f806c  CALL 0x005f5600
005f8071  MOVZX EDX,AL
005f8074  TEST EDX,EDX
005f8076  JNZ 0x005f80a5
005f8078  MOV EAX,dword ptr [EBP + -0x1c]
005f807b  MOV ECX,dword ptr [EAX + 0x154]
005f8081  MOV EDX,dword ptr [EBP + -0x1c]
005f8084  MOV EAX,dword ptr [EDX + 0x14c]
005f808a  MOV EDX,dword ptr [EBP + -0x10]
005f808d  MOV dword ptr [EAX + ECX*0x4],EDX
005f8090  MOV EAX,dword ptr [EBP + -0x1c]
005f8093  MOV ECX,dword ptr [EAX + 0x154]
005f8099  ADD ECX,0x1
005f809c  MOV EDX,dword ptr [EBP + -0x1c]
005f809f  MOV dword ptr [EDX + 0x154],ECX
005f80a5  JMP 0x005f801b
005f80aa  MOV dword ptr [EBP + -0x4],0x0
005f80b1  JMP 0x005f80bc
005f80b3  MOV EAX,dword ptr [EBP + -0x4]
005f80b6  ADD EAX,0x1
005f80b9  MOV dword ptr [EBP + -0x4],EAX
005f80bc  MOV ECX,dword ptr [EBP + -0x1c]
005f80bf  MOV EDX,dword ptr [EBP + -0x4]
005f80c2  CMP EDX,dword ptr [ECX + 0x154]
005f80c8  JGE 0x005f8109
005f80ca  MOV EAX,dword ptr [EBP + -0x1c]
005f80cd  MOV ECX,dword ptr [EAX + 0x14c]
005f80d3  MOV EDX,dword ptr [EBP + -0x4]
005f80d6  CMP dword ptr [ECX + EDX*0x4],0x0
005f80da  JZ 0x005f8107
005f80dc  MOV EAX,dword ptr [EBP + 0x8]
005f80df  PUSH EAX
005f80e0  MOV ECX,dword ptr [EBP + -0x1c]
005f80e3  MOV EDX,dword ptr [ECX + 0x14c]
005f80e9  MOV EAX,dword ptr [EBP + -0x4]
005f80ec  MOV ECX,dword ptr [EDX + EAX*0x4]
005f80ef  MOV EDX,dword ptr [EBP + -0x1c]
005f80f2  MOV EAX,dword ptr [EDX + 0x14c]
005f80f8  MOV EDX,dword ptr [EBP + -0x4]
005f80fb  MOV EAX,dword ptr [EAX + EDX*0x4]
005f80fe  MOV EDX,dword ptr [ECX]
005f8100  MOV ECX,EAX
005f8102  MOV EAX,dword ptr [EDX + 0x3c]
005f8105  CALL EAX
005f8107  JMP 0x005f80b3
005f8109  MOV ECX,dword ptr [EBP + -0x1c]
005f810c  MOV dword ptr [ECX + 0x154],0x0
005f8116  MOV EDX,dword ptr [EBP + 0x8]
005f8119  MOV EAX,dword ptr [EDX + 0x18]
005f811c  MOV dword ptr [EBP + -0x24],EAX
005f811f  CMP dword ptr [EBP + -0x24],0x1
005f8123  JZ 0x005f813e
005f8125  CMP dword ptr [EBP + -0x24],0x2
005f8129  JZ 0x005f82ff
005f812f  CMP dword ptr [EBP + -0x24],0x3
005f8133  JZ 0x005f820b
005f8139  JMP 0x005f832d
005f813e  MOV ECX,dword ptr [EBP + -0x1c]
005f8141  CMP dword ptr [ECX + 0x1a4],0x0
005f8148  JNZ 0x005f814f
005f814a  JMP 0x005f832d
005f814f  MOV EDX,dword ptr [EBP + -0x1c]
005f8152  PUSH EDX
005f8153  MOV ECX,dword ptr [0x015e55e8]
005f8159  CALL 0x005f3f70
005f815e  MOV EAX,dword ptr [EBP + -0x1c]
005f8161  PUSH EAX
005f8162  MOV ECX,dword ptr [0x015e55e8]
005f8168  CALL 0x005f3ee0
005f816d  MOV ECX,dword ptr [EBP + -0x1c]
005f8170  CALL 0x005f9a80
005f8175  MOV ECX,dword ptr [EBP + -0x1c]
005f8178  MOVZX EDX,byte ptr [ECX + 0x124]
005f817f  TEST EDX,EDX
005f8181  JZ 0x005f8188
005f8183  JMP 0x005f832d
005f8188  MOV EAX,dword ptr [EBP + 0x8]
005f818b  MOV ECX,dword ptr [EBP + -0x1c]
005f818e  MOV EDX,dword ptr [EAX + 0xc]
005f8191  CMP EDX,dword ptr [ECX + 0x120]
005f8197  JG 0x005f81a2
005f8199  MOV EAX,dword ptr [EBP + 0x8]
005f819c  CMP dword ptr [EAX + 0xc],0x0
005f81a0  JGE 0x005f81a7
005f81a2  JMP 0x005f832d
005f81a7  MOV ECX,dword ptr [EBP + -0x1c]
005f81aa  CALL 0x005f8550
005f81af  SUB EAX,0x4
005f81b2  MOV ECX,dword ptr [EBP + 0x8]
005f81b5  CMP dword ptr [ECX + 0x8],EAX
005f81b8  JG 0x005f81c3
005f81ba  MOV EDX,dword ptr [EBP + 0x8]
005f81bd  CMP dword ptr [EDX + 0x8],0x0
005f81c1  JGE 0x005f81c8
005f81c3  JMP 0x005f832d
005f81c8  MOV EAX,dword ptr [EBP + -0x1c]
005f81cb  MOV byte ptr [EAX + 0x124],0x1
005f81d2  MOV ECX,dword ptr [EBP + -0x1c]
005f81d5  MOV EDX,dword ptr [EBP + 0x8]
005f81d8  MOV EAX,dword ptr [EDX + 0x8]
005f81db  MOV dword ptr [ECX + 0x130],EAX
005f81e1  MOV ECX,dword ptr [EBP + -0x1c]
005f81e4  MOV EDX,dword ptr [EBP + 0x8]
005f81e7  MOV EAX,dword ptr [EDX + 0xc]
005f81ea  MOV dword ptr [ECX + 0x134],EAX
005f81f0  MOV ECX,dword ptr [EBP + -0x1c]
005f81f3  PUSH ECX
005f81f4  MOV ECX,dword ptr [0x015e55e8]
005f81fa  CALL 0x005f41c0
005f81ff  MOV EDX,dword ptr [EBP + 0x8]
005f8202  MOV byte ptr [EDX + 0x4],0x1
005f8206  JMP 0x005f832d
005f820b  MOV EAX,dword ptr [EBP + -0x1c]
005f820e  MOVZX ECX,byte ptr [EAX + 0x124]
005f8215  TEST ECX,ECX
005f8217  JZ 0x005f82fd
005f821d  MOV ECX,dword ptr [EBP + -0x1c]
005f8220  CALL 0x005f84d0
005f8225  MOV EDX,dword ptr [EBP + -0x1c]
005f8228  MOV ECX,dword ptr [EBP + 0x8]
005f822b  MOV EDX,dword ptr [EDX + 0x130]
005f8231  SUB EDX,dword ptr [ECX + 0x8]
005f8234  SUB EAX,EDX
005f8236  MOV dword ptr [EBP + -0xc],EAX
005f8239  MOV ECX,dword ptr [EBP + -0x1c]
005f823c  CALL 0x005f84f0
005f8241  MOV ECX,dword ptr [EBP + -0x1c]
005f8244  MOV EDX,dword ptr [EBP + 0x8]
005f8247  MOV ECX,dword ptr [ECX + 0x134]
005f824d  SUB ECX,dword ptr [EDX + 0xc]
005f8250  SUB EAX,ECX
005f8252  MOV dword ptr [EBP + -0x8],EAX
005f8255  CMP dword ptr [EBP + -0xc],0x0
005f8259  JGE 0x005f8262
005f825b  MOV dword ptr [EBP + -0xc],0x0
005f8262  CMP dword ptr [EBP + -0x8],0x0
005f8266  JGE 0x005f826f
005f8268  MOV dword ptr [EBP + -0x8],0x0
005f826f  MOV ECX,dword ptr [EBP + -0x1c]
005f8272  CALL 0x005f8590
005f8277  MOV ESI,EAX
005f8279  ADD ESI,dword ptr [EBP + -0xc]
005f827c  MOV EDX,dword ptr [0x015e55e8]
005f8282  MOV ECX,dword ptr [EDX + 0x14]
005f8285  CALL 0x005f8550
005f828a  CMP ESI,EAX
005f828c  JLE 0x005f82aa
005f828e  MOV EAX,[0x015e55e8]
005f8293  MOV ECX,dword ptr [EAX + 0x14]
005f8296  CALL 0x005f8550
005f829b  MOV ESI,EAX
005f829d  MOV ECX,dword ptr [EBP + -0x1c]
005f82a0  CALL 0x005f8590
005f82a5  SUB ESI,EAX
005f82a7  MOV dword ptr [EBP + -0xc],ESI
005f82aa  MOV ECX,dword ptr [EBP + -0x1c]
005f82ad  CALL 0x005f85b0
005f82b2  MOV ESI,EAX
005f82b4  ADD ESI,dword ptr [EBP + -0x8]
005f82b7  MOV ECX,dword ptr [0x015e55e8]
005f82bd  MOV ECX,dword ptr [ECX + 0x14]
005f82c0  CALL 0x005f8570
005f82c5  CMP ESI,EAX
005f82c7  JLE 0x005f82e6
005f82c9  MOV EDX,dword ptr [0x015e55e8]
005f82cf  MOV ECX,dword ptr [EDX + 0x14]
005f82d2  CALL 0x005f8570
005f82d7  MOV ESI,EAX
005f82d9  MOV ECX,dword ptr [EBP + -0x1c]
005f82dc  CALL 0x005f85b0
005f82e1  SUB ESI,EAX
005f82e3  MOV dword ptr [EBP + -0x8],ESI
005f82e6  MOV EAX,dword ptr [EBP + -0x8]
005f82e9  PUSH EAX
005f82ea  MOV ECX,dword ptr [EBP + -0xc]
005f82ed  PUSH ECX
005f82ee  MOV ECX,dword ptr [EBP + -0x1c]
005f82f1  CALL 0x005f8420
005f82f6  MOV EDX,dword ptr [EBP + 0x8]
005f82f9  MOV byte ptr [EDX + 0x4],0x1
005f82fd  JMP 0x005f832d
005f82ff  MOV EAX,dword ptr [EBP + -0x1c]
005f8302  MOVZX ECX,byte ptr [EAX + 0x124]
005f8309  TEST ECX,ECX
005f830b  JNZ 0x005f830f
005f830d  JMP 0x005f832d
005f830f  MOV EDX,dword ptr [EBP + -0x1c]
005f8312  MOV byte ptr [EDX + 0x124],0x0
005f8319  PUSH 0x0
005f831b  MOV ECX,dword ptr [0x015e55e8]
005f8321  CALL 0x005f41c0
005f8326  MOV EAX,dword ptr [EBP + 0x8]
005f8329  MOV byte ptr [EAX + 0x4],0x1
005f832d  POP ESI
005f832e  MOV ESP,EBP
005f8330  POP EBP
005f8331  RET 0x4
