; FUN_0056f560  0056f560
0056f560  PUSH EBP
0056f561  MOV EBP,ESP
0056f563  SUB ESP,0xc
0056f566  PUSH ESI
0056f567  MOV dword ptr [EBP + -0x8],ECX
0056f56a  MOV word ptr [EBP + -0x4],0x0
0056f570  JMP 0x0056f57e
0056f572  MOV AX,word ptr [EBP + -0x4]
0056f576  ADD AX,0x1
0056f57a  MOV word ptr [EBP + -0x4],AX
0056f57e  MOVSX ECX,word ptr [EBP + -0x4]
0056f582  CMP ECX,0x7
0056f585  JGE 0x0056f5b6
0056f587  MOVSX EDX,word ptr [EBP + -0x4]
0056f58b  MOV EAX,dword ptr [EBP + -0x8]
0056f58e  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xbc]
0056f595  CMP ECX,dword ptr [EBP + 0x8]
0056f598  JNZ 0x0056f5a1
0056f59a  JMP 0x0056f842
0056f5a1  MOVSX EDX,word ptr [EBP + -0x4]
0056f5a5  MOV EAX,dword ptr [EBP + -0x8]
0056f5a8  CMP dword ptr [EAX + EDX*0x4 + 0xbc],-0x1
0056f5b0  JNZ 0x0056f5b4
0056f5b2  JMP 0x0056f5b6
0056f5b4  JMP 0x0056f572
0056f5b6  MOVSX ECX,word ptr [EBP + -0x4]
0056f5ba  MOV EDX,dword ptr [EBP + -0x8]
0056f5bd  MOV EAX,dword ptr [EBP + 0x8]
0056f5c0  MOV dword ptr [EDX + ECX*0x4 + 0xbc],EAX
0056f5c7  MOVSX ECX,word ptr [EBP + -0x4]
0056f5cb  TEST ECX,ECX
0056f5cd  JNZ 0x0056f5e9
0056f5cf  PUSH 0x3
0056f5d1  MOV EDX,dword ptr [EBP + -0x8]
0056f5d4  MOV EAX,dword ptr [EDX + 0x6c]
0056f5d7  MOV ECX,dword ptr [EBP + -0x8]
0056f5da  MOV ECX,dword ptr [ECX + 0x6c]
0056f5dd  MOV EDX,dword ptr [EAX]
0056f5df  MOV EAX,dword ptr [EDX + 0xb0]
0056f5e5  CALL EAX
0056f5e7  JMP 0x0056f650
0056f5e9  MOVSX ECX,word ptr [EBP + -0x4]
0056f5ed  CMP ECX,0x1
0056f5f0  JNZ 0x0056f60c
0056f5f2  PUSH 0x2
0056f5f4  MOV EDX,dword ptr [EBP + -0x8]
0056f5f7  MOV EAX,dword ptr [EDX + 0x6c]
0056f5fa  MOV ECX,dword ptr [EBP + -0x8]
0056f5fd  MOV ECX,dword ptr [ECX + 0x6c]
0056f600  MOV EDX,dword ptr [EAX]
0056f602  MOV EAX,dword ptr [EDX + 0xb0]
0056f608  CALL EAX
0056f60a  JMP 0x0056f650
0056f60c  MOVSX ECX,word ptr [EBP + -0x4]
0056f610  CMP ECX,0x3
0056f613  JNZ 0x0056f62f
0056f615  PUSH 0x1
0056f617  MOV EDX,dword ptr [EBP + -0x8]
0056f61a  MOV EAX,dword ptr [EDX + 0x6c]
0056f61d  MOV ECX,dword ptr [EBP + -0x8]
0056f620  MOV ECX,dword ptr [ECX + 0x6c]
0056f623  MOV EDX,dword ptr [EAX]
0056f625  MOV EAX,dword ptr [EDX + 0xb0]
0056f62b  CALL EAX
0056f62d  JMP 0x0056f650
0056f62f  MOVSX ECX,word ptr [EBP + -0x4]
0056f633  CMP ECX,0x6
0056f636  JNZ 0x0056f650
0056f638  PUSH 0x0
0056f63a  MOV EDX,dword ptr [EBP + -0x8]
0056f63d  MOV EAX,dword ptr [EDX + 0x6c]
0056f640  MOV ECX,dword ptr [EBP + -0x8]
0056f643  MOV ECX,dword ptr [ECX + 0x6c]
0056f646  MOV EDX,dword ptr [EAX]
0056f648  MOV EAX,dword ptr [EDX + 0xb0]
0056f64e  CALL EAX
0056f650  MOV ECX,dword ptr [EBP + -0x8]
0056f653  MOV EDX,dword ptr [ECX + 0x6c]
0056f656  MOV EAX,dword ptr [EBP + -0x8]
0056f659  MOV ECX,dword ptr [EAX + 0x6c]
0056f65c  MOV EDX,dword ptr [EDX]
0056f65e  MOV EAX,dword ptr [EDX + 0x74]
0056f661  CALL EAX
0056f663  MOV ECX,dword ptr [EBP + 0x8]
0056f666  MOV dword ptr [EBP + -0xc],ECX
0056f669  CMP dword ptr [EBP + -0xc],0x7
0056f66d  JA 0x0056f7d4
0056f673  MOV EDX,dword ptr [EBP + -0xc]
0056f676  JMP dword ptr [EDX*0x4 + 0x56f84c]
0056f67d  PUSH 0x2
0056f67f  CALL 0x0062fbf0
0056f684  ADD ESP,0x4
0056f687  ADD EAX,0xc
0056f68a  PUSH EAX
0056f68b  MOVSX EAX,word ptr [EBP + -0x4]
0056f68f  MOV ECX,dword ptr [EBP + -0x8]
0056f692  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x7c]
0056f696  MOVSX EAX,word ptr [EBP + -0x4]
0056f69a  MOV ECX,dword ptr [EBP + -0x8]
0056f69d  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x7c]
0056f6a1  MOV EDX,dword ptr [EDX]
0056f6a3  MOV EAX,dword ptr [EDX + 0xb0]
0056f6a9  CALL EAX
0056f6ab  JMP 0x0056f7d4
0056f6b0  PUSH 0x2
0056f6b2  CALL 0x0062fbf0
0056f6b7  ADD ESP,0x4
0056f6ba  ADD EAX,0xa
0056f6bd  PUSH EAX
0056f6be  MOVSX ECX,word ptr [EBP + -0x4]
0056f6c2  MOV EDX,dword ptr [EBP + -0x8]
0056f6c5  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x7c]
0056f6c9  MOVSX ECX,word ptr [EBP + -0x4]
0056f6cd  MOV EDX,dword ptr [EBP + -0x8]
0056f6d0  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x7c]
0056f6d4  MOV EAX,dword ptr [EAX]
0056f6d6  MOV EDX,dword ptr [EAX + 0xb0]
0056f6dc  CALL EDX
0056f6de  JMP 0x0056f7d4
0056f6e3  PUSH 0x2
0056f6e5  CALL 0x0062fbf0
0056f6ea  ADD ESP,0x4
0056f6ed  ADD EAX,0x8
0056f6f0  PUSH EAX
0056f6f1  MOVSX EAX,word ptr [EBP + -0x4]
0056f6f5  MOV ECX,dword ptr [EBP + -0x8]
0056f6f8  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x7c]
0056f6fc  MOVSX EAX,word ptr [EBP + -0x4]
0056f700  MOV ECX,dword ptr [EBP + -0x8]
0056f703  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x7c]
0056f707  MOV EDX,dword ptr [EDX]
0056f709  MOV EAX,dword ptr [EDX + 0xb0]
0056f70f  CALL EAX
0056f711  JMP 0x0056f7d4
0056f716  PUSH 0x2
0056f718  CALL 0x0062fbf0
0056f71d  ADD ESP,0x4
0056f720  ADD EAX,0x6
0056f723  PUSH EAX
0056f724  MOVSX ECX,word ptr [EBP + -0x4]
0056f728  MOV EDX,dword ptr [EBP + -0x8]
0056f72b  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x7c]
0056f72f  MOVSX ECX,word ptr [EBP + -0x4]
0056f733  MOV EDX,dword ptr [EBP + -0x8]
0056f736  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x7c]
0056f73a  MOV EAX,dword ptr [EAX]
0056f73c  MOV EDX,dword ptr [EAX + 0xb0]
0056f742  CALL EDX
0056f744  JMP 0x0056f7d4
0056f749  PUSH 0x2
0056f74b  CALL 0x0062fbf0
0056f750  ADD ESP,0x4
0056f753  ADD EAX,0x4
0056f756  PUSH EAX
0056f757  MOVSX EAX,word ptr [EBP + -0x4]
0056f75b  MOV ECX,dword ptr [EBP + -0x8]
0056f75e  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x7c]
0056f762  MOVSX EAX,word ptr [EBP + -0x4]
0056f766  MOV ECX,dword ptr [EBP + -0x8]
0056f769  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x7c]
0056f76d  MOV EDX,dword ptr [EDX]
0056f76f  MOV EAX,dword ptr [EDX + 0xb0]
0056f775  CALL EAX
0056f777  JMP 0x0056f7d4
0056f779  PUSH 0x2
0056f77b  CALL 0x0062fbf0
0056f780  ADD ESP,0x4
0056f783  ADD EAX,0x2
0056f786  PUSH EAX
0056f787  MOVSX ECX,word ptr [EBP + -0x4]
0056f78b  MOV EDX,dword ptr [EBP + -0x8]
0056f78e  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x7c]
0056f792  MOVSX ECX,word ptr [EBP + -0x4]
0056f796  MOV EDX,dword ptr [EBP + -0x8]
0056f799  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x7c]
0056f79d  MOV EAX,dword ptr [EAX]
0056f79f  MOV EDX,dword ptr [EAX + 0xb0]
0056f7a5  CALL EDX
0056f7a7  JMP 0x0056f7d4
0056f7a9  PUSH 0x2
0056f7ab  CALL 0x0062fbf0
0056f7b0  ADD ESP,0x4
0056f7b3  PUSH EAX
0056f7b4  MOVSX EAX,word ptr [EBP + -0x4]
0056f7b8  MOV ECX,dword ptr [EBP + -0x8]
0056f7bb  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x7c]
0056f7bf  MOVSX EAX,word ptr [EBP + -0x4]
0056f7c3  MOV ECX,dword ptr [EBP + -0x8]
0056f7c6  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x7c]
0056f7ca  MOV EDX,dword ptr [EDX]
0056f7cc  MOV EAX,dword ptr [EDX + 0xb0]
0056f7d2  CALL EAX
0056f7d4  MOVSX ESI,word ptr [EBP + -0x4]
0056f7d8  PUSH 0x5
0056f7da  CALL 0x0062fbf0
0056f7df  ADD ESP,0x4
0056f7e2  MOV ECX,dword ptr [ESI*0x8 + 0x7488bc]
0056f7e9  LEA EDX,[ECX + EAX*0x1 + -0x2]
0056f7ed  PUSH EDX
0056f7ee  MOVSX ESI,word ptr [EBP + -0x4]
0056f7f2  PUSH 0x5
0056f7f4  CALL 0x0062fbf0
0056f7f9  ADD ESP,0x4
0056f7fc  MOV ECX,dword ptr [ESI*0x8 + 0x7488b8]
0056f803  LEA EDX,[ECX + EAX*0x1 + -0x2]
0056f807  PUSH EDX
0056f808  MOVSX EAX,word ptr [EBP + -0x4]
0056f80c  MOV ECX,dword ptr [EBP + -0x8]
0056f80f  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x7c]
0056f813  MOVSX EAX,word ptr [EBP + -0x4]
0056f817  MOV ECX,dword ptr [EBP + -0x8]
0056f81a  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x7c]
0056f81e  MOV EDX,dword ptr [EDX]
0056f820  MOV EAX,dword ptr [EDX + 0x44]
0056f823  CALL EAX
0056f825  MOVSX ECX,word ptr [EBP + -0x4]
0056f829  MOV EDX,dword ptr [EBP + -0x8]
0056f82c  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x7c]
0056f830  MOVSX ECX,word ptr [EBP + -0x4]
0056f834  MOV EDX,dword ptr [EBP + -0x8]
0056f837  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x7c]
0056f83b  MOV EAX,dword ptr [EAX]
0056f83d  MOV EDX,dword ptr [EAX + 0x74]
0056f840  CALL EDX
0056f842  POP ESI
0056f843  MOV ESP,EBP
0056f845  POP EBP
0056f846  RET 0x4
