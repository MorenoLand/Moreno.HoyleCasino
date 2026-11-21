; FUN_005f95e0  005f95e0
005f95e0  PUSH EBP
005f95e1  MOV EBP,ESP
005f95e3  PUSH -0x1
005f95e5  PUSH 0x6aa249
005f95ea  MOV EAX,FS:[0x0]
005f95f0  PUSH EAX
005f95f1  SUB ESP,0x54
005f95f4  PUSH ESI
005f95f5  MOV EAX,[0x00781870]
005f95fa  XOR EAX,EBP
005f95fc  PUSH EAX
005f95fd  LEA EAX,[EBP + -0xc]
005f9600  MOV FS:[0x0],EAX
005f9606  MOV dword ptr [EBP + -0x50],ECX
005f9609  MOV ECX,dword ptr [EBP + -0x50]
005f960c  CALL 0x005f9a80
005f9611  MOV EAX,dword ptr [EBP + -0x50]
005f9614  CMP dword ptr [EAX + 0x114],0x0
005f961b  JNZ 0x005f966d
005f961d  MOV ECX,dword ptr [EBP + -0x50]
005f9620  CMP dword ptr [ECX + 0x17c],0x0
005f9627  JZ 0x005f9668
005f9629  MOV EDX,dword ptr [EBP + -0x50]
005f962c  MOV EAX,dword ptr [EDX + 0x17c]
005f9632  MOV dword ptr [EBP + -0x14],EAX
005f9635  MOV ECX,dword ptr [EBP + -0x14]
005f9638  MOV dword ptr [EBP + -0x10],ECX
005f963b  CMP dword ptr [EBP + -0x10],0x0
005f963f  JZ 0x005f9654
005f9641  PUSH 0x1
005f9643  MOV EDX,dword ptr [EBP + -0x10]
005f9646  MOV EAX,dword ptr [EDX]
005f9648  MOV ECX,dword ptr [EBP + -0x10]
005f964b  MOV EDX,dword ptr [EAX]
005f964d  CALL EDX
005f964f  MOV dword ptr [EBP + -0x54],EAX
005f9652  JMP 0x005f965b
005f9654  MOV dword ptr [EBP + -0x54],0x0
005f965b  MOV EAX,dword ptr [EBP + -0x50]
005f965e  MOV dword ptr [EAX + 0x17c],0x0
005f9668  JMP 0x005f9a66
005f966d  MOV ECX,dword ptr [EBP + -0x50]
005f9670  CMP dword ptr [ECX + 0x17c],0x0
005f9677  JNZ 0x005f9736
005f967d  PUSH 0x178
005f9682  CALL 0x00686d82
005f9687  ADD ESP,0x4
005f968a  MOV dword ptr [EBP + -0x1c],EAX
005f968d  MOV dword ptr [EBP + -0x4],0x0
005f9694  CMP dword ptr [EBP + -0x1c],0x0
005f9698  JZ 0x005f96a7
005f969a  MOV ECX,dword ptr [EBP + -0x1c]
005f969d  CALL 0x005eaaf0
005f96a2  MOV dword ptr [EBP + -0x58],EAX
005f96a5  JMP 0x005f96ae
005f96a7  MOV dword ptr [EBP + -0x58],0x0
005f96ae  MOV EDX,dword ptr [EBP + -0x58]
005f96b1  MOV dword ptr [EBP + -0x18],EDX
005f96b4  MOV dword ptr [EBP + -0x4],0xffffffff
005f96bb  MOV EAX,dword ptr [EBP + -0x50]
005f96be  MOV ECX,dword ptr [EBP + -0x18]
005f96c1  MOV dword ptr [EAX + 0x17c],ECX
005f96c7  MOV EDX,dword ptr [EBP + -0x50]
005f96ca  MOV EAX,dword ptr [EDX + 0x17c]
005f96d0  MOV ECX,dword ptr [EBP + -0x50]
005f96d3  MOV ECX,dword ptr [ECX + 0x17c]
005f96d9  MOV EDX,dword ptr [EAX]
005f96db  MOV EAX,dword ptr [EDX + 0x74]
005f96de  CALL EAX
005f96e0  MOV ECX,dword ptr [EBP + -0x50]
005f96e3  MOV EDX,dword ptr [ECX + 0x17c]
005f96e9  MOV EAX,dword ptr [EBP + -0x50]
005f96ec  MOV dword ptr [EDX + 0x4],EAX
005f96ef  MOV ECX,dword ptr [EBP + -0x50]
005f96f2  MOV EDX,dword ptr [ECX + 0x17c]
005f96f8  MOV EAX,dword ptr [EBP + -0x50]
005f96fb  MOV ECX,dword ptr [EAX + 0x17c]
005f9701  MOV EDX,dword ptr [EDX]
005f9703  MOV EAX,dword ptr [EDX + 0x40]
005f9706  CALL EAX
005f9708  PUSH 0x0
005f970a  MOV ECX,dword ptr [EBP + -0x50]
005f970d  MOV ECX,dword ptr [ECX + 0x17c]
005f9713  CALL 0x005eb000
005f9718  PUSH 0x0
005f971a  MOV EDX,dword ptr [EBP + -0x50]
005f971d  MOV EAX,dword ptr [EDX + 0x17c]
005f9723  MOV ECX,dword ptr [EBP + -0x50]
005f9726  MOV ECX,dword ptr [ECX + 0x17c]
005f972c  MOV EDX,dword ptr [EAX]
005f972e  MOV EAX,dword ptr [EDX + 0xb0]
005f9734  CALL EAX
005f9736  MOV ECX,dword ptr [EBP + -0x50]
005f9739  MOV EDX,dword ptr [ECX + 0x114]
005f973f  PUSH EDX
005f9740  MOV EAX,dword ptr [EBP + -0x50]
005f9743  MOV ECX,dword ptr [EAX + 0x17c]
005f9749  CALL 0x005eaf00
005f974e  PUSH 0x0
005f9750  MOV ECX,dword ptr [EBP + -0x50]
005f9753  MOV ECX,dword ptr [ECX + 0x17c]
005f9759  CALL 0x005eb000
005f975e  MOV EDX,dword ptr [EBP + -0x50]
005f9761  MOV EAX,dword ptr [EDX + 0x118]
005f9767  PUSH EAX
005f9768  MOV ECX,dword ptr [EBP + -0x50]
005f976b  MOV EDX,dword ptr [ECX + 0x17c]
005f9771  MOV EAX,dword ptr [EBP + -0x50]
005f9774  MOV ECX,dword ptr [EAX + 0x17c]
005f977a  MOV EDX,dword ptr [EDX]
005f977c  MOV EAX,dword ptr [EDX + 0xb0]
005f9782  CALL EAX
005f9784  MOV ECX,dword ptr [EBP + -0x50]
005f9787  MOV ECX,dword ptr [ECX + 0x17c]
005f978d  CALL 0x005eb470
005f9792  TEST EAX,EAX
005f9794  JNZ 0x005f97ac
005f9796  MOV EDX,dword ptr [EBP + -0x50]
005f9799  MOV ECX,dword ptr [EDX + 0x17c]
005f979f  CALL 0x005eb4b0
005f97a4  TEST EAX,EAX
005f97a6  JZ 0x005f986c
005f97ac  MOV EAX,dword ptr [EBP + -0x50]
005f97af  MOV ECX,dword ptr [EAX + 0x17c]
005f97b5  CALL 0x005eb4b0
005f97ba  NEG EAX
005f97bc  PUSH EAX
005f97bd  MOV ECX,dword ptr [EBP + -0x50]
005f97c0  MOV ECX,dword ptr [ECX + 0x17c]
005f97c6  CALL 0x005eb470
005f97cb  NEG EAX
005f97cd  PUSH EAX
005f97ce  MOV EDX,dword ptr [EBP + -0x50]
005f97d1  MOV EAX,dword ptr [EDX + 0x17c]
005f97d7  MOV ECX,dword ptr [EBP + -0x50]
005f97da  MOV ECX,dword ptr [ECX + 0x17c]
005f97e0  MOV EDX,dword ptr [EAX]
005f97e2  MOV EAX,dword ptr [EDX + 0x44]
005f97e5  CALL EAX
005f97e7  MOV ECX,dword ptr [EBP + -0x50]
005f97ea  MOV ECX,dword ptr [ECX + 0x17c]
005f97f0  CALL 0x005eb470
005f97f5  MOV EDX,dword ptr [EBP + -0x50]
005f97f8  MOV dword ptr [EDX + 0x108],EAX
005f97fe  MOV EAX,dword ptr [EBP + -0x50]
005f9801  MOV ECX,dword ptr [EAX + 0x17c]
005f9807  CALL 0x005eb4b0
005f980c  MOV ECX,dword ptr [EBP + -0x50]
005f980f  MOV dword ptr [ECX + 0x104],EAX
005f9815  MOV EDX,dword ptr [EBP + -0x50]
005f9818  MOV ECX,dword ptr [EDX + 0x17c]
005f981e  CALL 0x005eb470
005f9823  MOV ESI,EAX
005f9825  MOV EAX,dword ptr [EBP + -0x50]
005f9828  MOV ECX,dword ptr [EAX + 0x17c]
005f982e  CALL 0x005f5550
005f9833  ADD ESI,EAX
005f9835  MOV ECX,dword ptr [EBP + -0x50]
005f9838  MOV dword ptr [ECX + 0x110],ESI
005f983e  MOV EDX,dword ptr [EBP + -0x50]
005f9841  MOV ECX,dword ptr [EDX + 0x17c]
005f9847  CALL 0x005eb4b0
005f984c  MOV ESI,EAX
005f984e  MOV EAX,dword ptr [EBP + -0x50]
005f9851  MOV ECX,dword ptr [EAX + 0x17c]
005f9857  CALL 0x005f5590
005f985c  ADD ESI,EAX
005f985e  MOV ECX,dword ptr [EBP + -0x50]
005f9861  MOV dword ptr [ECX + 0x10c],ESI
005f9867  JMP 0x005f99e0
005f986c  MOV EDX,dword ptr [EBP + -0x50]
005f986f  MOV ECX,dword ptr [EDX + 0x17c]
005f9875  CALL 0x005f5550
005f987a  MOV ECX,dword ptr [EBP + -0x50]
005f987d  ADD EAX,dword ptr [ECX + 0x108]
005f9883  MOV EDX,dword ptr [EBP + -0x50]
005f9886  MOV dword ptr [EDX + 0x110],EAX
005f988c  MOV EAX,dword ptr [EBP + -0x50]
005f988f  MOV ECX,dword ptr [EAX + 0x17c]
005f9895  CALL 0x005f5590
005f989a  MOV ECX,dword ptr [EBP + -0x50]
005f989d  ADD EAX,dword ptr [ECX + 0x104]
005f98a3  MOV EDX,dword ptr [EBP + -0x50]
005f98a6  MOV dword ptr [EDX + 0x10c],EAX
005f98ac  MOV EAX,dword ptr [EBP + -0x50]
005f98af  MOV ECX,dword ptr [EBP + -0x50]
005f98b2  MOV EDX,dword ptr [EAX + 0x110]
005f98b8  CMP EDX,dword ptr [ECX + 0x108]
005f98be  JNZ 0x005f98df
005f98c0  MOV EAX,[0x015e55e8]
005f98c5  MOV ECX,dword ptr [EAX + 0x14]
005f98c8  CALL 0x005f8550
005f98cd  MOV ECX,dword ptr [EBP + -0x50]
005f98d0  ADD EAX,dword ptr [ECX + 0x108]
005f98d6  MOV EDX,dword ptr [EBP + -0x50]
005f98d9  MOV dword ptr [EDX + 0x110],EAX
005f98df  MOV EAX,dword ptr [EBP + -0x50]
005f98e2  MOV ECX,dword ptr [EBP + -0x50]
005f98e5  MOV EDX,dword ptr [EAX + 0x10c]
005f98eb  CMP EDX,dword ptr [ECX + 0x104]
005f98f1  JNZ 0x005f9912
005f98f3  MOV EAX,[0x015e55e8]
005f98f8  MOV ECX,dword ptr [EAX + 0x14]
005f98fb  CALL 0x005f8570
005f9900  MOV ECX,dword ptr [EBP + -0x50]
005f9903  ADD EAX,dword ptr [ECX + 0x104]
005f9909  MOV EDX,dword ptr [EBP + -0x50]
005f990c  MOV dword ptr [EDX + 0x10c],EAX
005f9912  MOVZX EAX,byte ptr [0x00795fb8]
005f9919  TEST EAX,EAX
005f991b  JZ 0x005f99e0
005f9921  MOV ECX,dword ptr [0x015e55e8]
005f9927  MOV EDX,dword ptr [EBP + -0x50]
005f992a  CMP EDX,dword ptr [ECX + 0x14]
005f992d  JNZ 0x005f99e0
005f9933  MOV EAX,[0x015e55e8]
005f9938  MOV ECX,dword ptr [EAX + 0x14]
005f993b  MOV EDX,dword ptr [ECX + 0x1a8]
005f9941  MOV dword ptr [EBP + -0x40],EDX
005f9944  MOV ECX,dword ptr [EBP + -0x40]
005f9947  CALL 0x00613600
005f994c  MOVZX EAX,AX
005f994f  MOV ECX,dword ptr [EBP + -0x50]
005f9952  CMP dword ptr [ECX + 0x110],EAX
005f9958  JNZ 0x005f9982
005f995a  MOV EDX,dword ptr [0x015e55e8]
005f9960  MOV EAX,dword ptr [EDX + 0x14]
005f9963  MOV ECX,dword ptr [EAX + 0x1a8]
005f9969  MOV dword ptr [EBP + -0x44],ECX
005f996c  MOV ECX,dword ptr [EBP + -0x44]
005f996f  CALL 0x00613620
005f9974  MOVZX EDX,AX
005f9977  MOV EAX,dword ptr [EBP + -0x50]
005f997a  CMP dword ptr [EAX + 0x10c],EDX
005f9980  JZ 0x005f99e0
005f9982  MOV ECX,dword ptr [EBP + -0x48]
005f9985  MOV dword ptr [EBP + -0x5c],ECX
005f9988  MOV EDX,dword ptr [0x015e55e8]
005f998e  MOV EAX,dword ptr [EDX + 0x14]
005f9991  MOV ECX,dword ptr [EAX + 0x1a8]
005f9997  MOV dword ptr [EBP + -0x5c],ECX
005f999a  MOV EDX,dword ptr [EBP + -0x5c]
005f999d  MOV EAX,dword ptr [EDX]
005f999f  MOV ECX,dword ptr [EBP + -0x5c]
005f99a2  MOV EDX,dword ptr [EAX + 0x34]
005f99a5  CALL EDX
005f99a7  MOV EAX,dword ptr [EBP + -0x4c]
005f99aa  MOV dword ptr [EBP + -0x60],EAX
005f99ad  MOV ECX,dword ptr [0x015e55e8]
005f99b3  MOV EDX,dword ptr [ECX + 0x14]
005f99b6  MOV EAX,dword ptr [EDX + 0x1a8]
005f99bc  MOV dword ptr [EBP + -0x60],EAX
005f99bf  MOV ECX,dword ptr [EBP + -0x50]
005f99c2  MOV EDX,dword ptr [ECX + 0x10c]
005f99c8  PUSH EDX
005f99c9  MOV EAX,dword ptr [EBP + -0x50]
005f99cc  MOV ECX,dword ptr [EAX + 0x110]
005f99d2  PUSH ECX
005f99d3  MOV EDX,dword ptr [EBP + -0x60]
005f99d6  MOV EAX,dword ptr [EDX]
005f99d8  MOV ECX,dword ptr [EBP + -0x60]
005f99db  MOV EDX,dword ptr [EAX + 0x4]
005f99de  CALL EDX
005f99e0  MOV EAX,dword ptr [EBP + -0x50]
005f99e3  MOV byte ptr [EAX + 0x178],0x0
005f99ea  LEA ECX,[EBP + -0x2c]
005f99ed  PUSH ECX
005f99ee  MOV EDX,dword ptr [EBP + -0x50]
005f99f1  MOV ECX,dword ptr [EDX + 0x17c]
005f99f7  CALL 0x005ebac0
005f99fc  MOV ECX,dword ptr [EBP + -0x50]
005f99ff  ADD ECX,0x180
005f9a05  MOV EDX,dword ptr [EAX]
005f9a07  MOV dword ptr [ECX],EDX
005f9a09  MOV EDX,dword ptr [EAX + 0x4]
005f9a0c  MOV dword ptr [ECX + 0x4],EDX
005f9a0f  MOV EDX,dword ptr [EAX + 0x8]
005f9a12  MOV dword ptr [ECX + 0x8],EDX
005f9a15  MOV EAX,dword ptr [EAX + 0xc]
005f9a18  MOV dword ptr [ECX + 0xc],EAX
005f9a1b  LEA ECX,[EBP + -0x3c]
005f9a1e  PUSH ECX
005f9a1f  MOV EDX,dword ptr [EBP + -0x50]
005f9a22  MOV ECX,dword ptr [EDX + 0x17c]
005f9a28  CALL 0x005ebf80
005f9a2d  MOV ECX,dword ptr [EBP + -0x50]
005f9a30  ADD ECX,0x190
005f9a36  MOV EDX,dword ptr [EAX]
005f9a38  MOV dword ptr [ECX],EDX
005f9a3a  MOV EDX,dword ptr [EAX + 0x4]
005f9a3d  MOV dword ptr [ECX + 0x4],EDX
005f9a40  MOV EDX,dword ptr [EAX + 0x8]
005f9a43  MOV dword ptr [ECX + 0x8],EDX
005f9a46  MOV EAX,dword ptr [EAX + 0xc]
005f9a49  MOV dword ptr [ECX + 0xc],EAX
005f9a4c  MOV ECX,dword ptr [EBP + -0x50]
005f9a4f  CALL 0x005f9a80
005f9a54  MOV ECX,dword ptr [EBP + -0x50]
005f9a57  MOV EDX,dword ptr [ECX + 0x17c]
005f9a5d  PUSH EDX
005f9a5e  MOV ECX,dword ptr [EBP + -0x50]
005f9a61  CALL 0x005f8ce0
005f9a66  MOV ECX,dword ptr [EBP + -0xc]
005f9a69  MOV dword ptr FS:[0x0],ECX
005f9a70  POP ECX
005f9a71  POP ESI
005f9a72  MOV ESP,EBP
005f9a74  POP EBP
005f9a75  RET
