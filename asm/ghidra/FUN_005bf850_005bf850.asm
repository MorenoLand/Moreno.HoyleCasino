; FUN_005bf850  005bf850
005bf850  PUSH EBP
005bf851  MOV EBP,ESP
005bf853  PUSH -0x1
005bf855  PUSH 0x6a8377
005bf85a  MOV EAX,FS:[0x0]
005bf860  PUSH EAX
005bf861  SUB ESP,0xb8
005bf867  MOV EAX,[0x00781870]
005bf86c  XOR EAX,EBP
005bf86e  PUSH EAX
005bf86f  LEA EAX,[EBP + -0xc]
005bf872  MOV FS:[0x0],EAX
005bf878  MOV dword ptr [EBP + 0xffffff54],ECX
005bf87e  MOV byte ptr [EBP + -0x15],0x0
005bf882  CMP dword ptr [EBP + 0x8],0x65
005bf886  JL 0x005bfba7
005bf88c  CMP dword ptr [EBP + 0x8],0xc9
005bf893  JG 0x005bfba7
005bf899  MOV EAX,dword ptr [EBP + 0xffffff54]
005bf89f  CMP dword ptr [EAX + 0x18],0x0
005bf8a3  JLE 0x005bfba7
005bf8a9  MOV byte ptr [EBP + -0x15],0x1
005bf8ad  MOV ECX,dword ptr [EBP + 0x8]
005bf8b0  PUSH ECX
005bf8b1  MOV EDX,dword ptr [EBP + 0xffffff54]
005bf8b7  MOV ECX,dword ptr [EDX + 0xc]
005bf8ba  CALL 0x005fb300
005bf8bf  MOV dword ptr [EBP + -0x24],EAX
005bf8c2  CMP dword ptr [EBP + -0x24],0x0
005bf8c6  JNZ 0x005bf8d0
005bf8c8  MOV AL,byte ptr [EBP + -0x15]
005bf8cb  JMP 0x005bfbaa
005bf8d0  MOV EAX,dword ptr [EBP + 0xffffff54]
005bf8d6  ADD EAX,0x1c
005bf8d9  MOV dword ptr [EBP + -0x44],EAX
005bf8dc  MOV ECX,dword ptr [EBP + -0x44]
005bf8df  CMP dword ptr [ECX + 0x4],0x0
005bf8e3  JNZ 0x005bf8f1
005bf8e5  MOV dword ptr [EBP + 0xffffff50],0x0
005bf8ef  JMP 0x005bf906
005bf8f1  MOV EDX,dword ptr [EBP + -0x44]
005bf8f4  MOV EAX,dword ptr [EBP + -0x44]
005bf8f7  MOV ECX,dword ptr [EDX + 0x8]
005bf8fa  SUB ECX,dword ptr [EAX + 0x4]
005bf8fd  SAR ECX,0x2
005bf900  MOV dword ptr [EBP + 0xffffff50],ECX
005bf906  MOV EDX,dword ptr [EBP + 0xffffff50]
005bf90c  SUB EDX,0x1
005bf90f  PUSH EDX
005bf910  CALL 0x0062fbf0
005bf915  ADD ESP,0x4
005bf918  MOV dword ptr [EBP + -0x14],EAX
005bf91b  MOV EAX,dword ptr [EBP + 0xffffff54]
005bf921  ADD EAX,0x1c
005bf924  MOV dword ptr [EBP + -0x48],EAX
005bf927  MOV ECX,dword ptr [EBP + -0x48]
005bf92a  CMP dword ptr [ECX + 0x4],0x0
005bf92e  JNZ 0x005bf93c
005bf930  MOV dword ptr [EBP + 0xffffff4c],0x0
005bf93a  JMP 0x005bf951
005bf93c  MOV EDX,dword ptr [EBP + -0x48]
005bf93f  MOV EAX,dword ptr [EBP + -0x48]
005bf942  MOV ECX,dword ptr [EDX + 0x8]
005bf945  SUB ECX,dword ptr [EAX + 0x4]
005bf948  SAR ECX,0x2
005bf94b  MOV dword ptr [EBP + 0xffffff4c],ECX
005bf951  MOV EDX,dword ptr [EBP + -0x14]
005bf954  CMP EDX,dword ptr [EBP + 0xffffff4c]
005bf95a  JC 0x005bf962
005bf95c  CALL dword ptr [0x006b2274]
005bf962  MOV EAX,dword ptr [EBP + -0x48]
005bf965  MOV ECX,dword ptr [EAX + 0x4]
005bf968  MOV EDX,dword ptr [EBP + -0x14]
005bf96b  MOV EAX,dword ptr [ECX + EDX*0x4]
005bf96e  MOV dword ptr [EBP + -0x28],EAX
005bf971  MOV ECX,dword ptr [EBP + -0x14]
005bf974  PUSH ECX
005bf975  MOV ECX,dword ptr [EBP + 0xffffff54]
005bf97b  ADD ECX,0x1c
005bf97e  CALL 0x005c0790
005bf983  MOV EDX,dword ptr [EBP + -0x24]
005bf986  MOV EAX,dword ptr [EDX]
005bf988  MOV ECX,dword ptr [EBP + -0x24]
005bf98b  MOV EDX,dword ptr [EAX + 0x70]
005bf98e  CALL EDX
005bf990  PUSH 0x184
005bf995  CALL 0x00686d82
005bf99a  ADD ESP,0x4
005bf99d  MOV dword ptr [EBP + -0x30],EAX
005bf9a0  MOV dword ptr [EBP + -0x4],0x0
005bf9a7  CMP dword ptr [EBP + -0x30],0x0
005bf9ab  JZ 0x005bf9bd
005bf9ad  MOV ECX,dword ptr [EBP + -0x30]
005bf9b0  CALL 0x005f5bf0
005bf9b5  MOV dword ptr [EBP + 0xffffff48],EAX
005bf9bb  JMP 0x005bf9c7
005bf9bd  MOV dword ptr [EBP + 0xffffff48],0x0
005bf9c7  MOV EAX,dword ptr [EBP + 0xffffff48]
005bf9cd  MOV dword ptr [EBP + -0x2c],EAX
005bf9d0  MOV dword ptr [EBP + -0x4],0xffffffff
005bf9d7  MOV ECX,dword ptr [EBP + -0x2c]
005bf9da  MOV dword ptr [EBP + -0x1c],ECX
005bf9dd  PUSH 0x28
005bf9df  CALL 0x00686d82
005bf9e4  ADD ESP,0x4
005bf9e7  MOV dword ptr [EBP + -0x38],EAX
005bf9ea  MOV dword ptr [EBP + -0x4],0x1
005bf9f1  CMP dword ptr [EBP + -0x38],0x0
005bf9f5  JZ 0x005bfa12
005bf9f7  MOV EDX,dword ptr [EBP + -0x28]
005bf9fa  PUSH EDX
005bf9fb  MOV EAX,dword ptr [EBP + 0xffffff54]
005bfa01  PUSH EAX
005bfa02  MOV ECX,dword ptr [EBP + -0x38]
005bfa05  CALL 0x005bfc40
005bfa0a  MOV dword ptr [EBP + 0xffffff44],EAX
005bfa10  JMP 0x005bfa1c
005bfa12  MOV dword ptr [EBP + 0xffffff44],0x0
005bfa1c  MOV ECX,dword ptr [EBP + 0xffffff44]
005bfa22  MOV dword ptr [EBP + -0x34],ECX
005bfa25  MOV dword ptr [EBP + -0x4],0xffffffff
005bfa2c  MOV EDX,dword ptr [EBP + -0x34]
005bfa2f  MOV dword ptr [EBP + -0x20],EDX
005bfa32  PUSH 0x24
005bfa34  CALL 0x00686d82
005bfa39  ADD ESP,0x4
005bfa3c  MOV dword ptr [EBP + -0x40],EAX
005bfa3f  MOV dword ptr [EBP + -0x4],0x2
005bfa46  CMP dword ptr [EBP + -0x40],0x0
005bfa4a  JZ 0x005bfa6d
005bfa4c  MOV EAX,dword ptr [EBP + -0x20]
005bfa4f  PUSH EAX
005bfa50  MOV ECX,dword ptr [EBP + 0xffffff54]
005bfa56  MOV EDX,dword ptr [ECX + 0x14]
005bfa59  MOV EAX,dword ptr [EDX + 0x38]
005bfa5c  PUSH EAX
005bfa5d  MOV ECX,dword ptr [EBP + -0x40]
005bfa60  CALL 0x005bf080
005bfa65  MOV dword ptr [EBP + 0xffffff40],EAX
005bfa6b  JMP 0x005bfa77
005bfa6d  MOV dword ptr [EBP + 0xffffff40],0x0
005bfa77  MOV ECX,dword ptr [EBP + 0xffffff40]
005bfa7d  MOV dword ptr [EBP + -0x3c],ECX
005bfa80  MOV dword ptr [EBP + -0x4],0xffffffff
005bfa87  PUSH 0x0
005bfa89  PUSH 0xff
005bfa8e  PUSH 0x0
005bfa90  MOV EDX,dword ptr [EBP + -0x20]
005bfa93  PUSH EDX
005bfa94  MOV EAX,dword ptr [EBP + -0x3c]
005bfa97  PUSH EAX
005bfa98  MOV ECX,dword ptr [EBP + 0x8]
005bfa9b  PUSH ECX
005bfa9c  PUSH 0x0
005bfa9e  PUSH 0x0
005bfaa0  MOV EDX,dword ptr [EBP + -0x28]
005bfaa3  MOV EAX,dword ptr [EDX + 0x4]
005bfaa6  PUSH EAX
005bfaa7  MOV ECX,dword ptr [EBP + 0x8]
005bfaaa  PUSH ECX
005bfaab  MOV EDX,dword ptr [EBP + -0x1c]
005bfaae  PUSH EDX
005bfaaf  MOV EAX,dword ptr [EBP + 0xffffff54]
005bfab5  MOV ECX,dword ptr [EAX + 0xc]
005bfab8  CALL 0x005f9c10
005bfabd  MOV ECX,dword ptr [EBP + -0x28]
005bfac0  MOV EDX,dword ptr [ECX + 0x8]
005bfac3  PUSH EDX
005bfac4  MOV ECX,dword ptr [EBP + -0x1c]
005bfac7  CALL 0x005eb000
005bfacc  MOV EAX,dword ptr [EBP + -0x28]
005bfacf  MOV ECX,dword ptr [EAX + 0xc]
005bfad2  PUSH ECX
005bfad3  MOV EDX,dword ptr [EBP + -0x1c]
005bfad6  MOV EAX,dword ptr [EDX]
005bfad8  MOV ECX,dword ptr [EBP + -0x1c]
005bfadb  MOV EDX,dword ptr [EAX + 0xb0]
005bfae1  CALL EDX
005bfae3  MOV EAX,dword ptr [EBP + -0x24]
005bfae6  PUSH EAX
005bfae7  MOV ECX,dword ptr [EBP + -0x1c]
005bfaea  MOV EDX,dword ptr [ECX]
005bfaec  MOV ECX,dword ptr [EBP + -0x1c]
005bfaef  MOV EAX,dword ptr [EDX + 0x8c]
005bfaf5  CALL EAX
005bfaf7  MOV ECX,dword ptr [EBP + -0x1c]
005bfafa  MOV dword ptr [ECX + 0x178],0x14
005bfb04  PUSH -0x1
005bfb06  MOV EDX,dword ptr [EBP + -0x24]
005bfb09  PUSH EDX
005bfb0a  MOV EAX,dword ptr [EBP + 0xffffff54]
005bfb10  MOV ECX,dword ptr [EAX + 0xc]
005bfb13  CALL 0x005fbcb0
005bfb18  MOV ECX,dword ptr [EBP + -0x28]
005bfb1b  MOV EDX,dword ptr [ECX]
005bfb1d  MOV dword ptr [EBP + 0xffffff3c],EDX
005bfb23  CMP dword ptr [EBP + 0xffffff3c],-0x2
005bfb2a  JZ 0x005bfb37
005bfb2c  CMP dword ptr [EBP + 0xffffff3c],-0x1
005bfb33  JZ 0x005bfb4e
005bfb35  JMP 0x005bfb72
005bfb37  MOV EAX,dword ptr [EBP + 0xffffff54]
005bfb3d  MOV ECX,dword ptr [EAX + 0x14]
005bfb40  ADD ECX,0x50
005bfb43  PUSH ECX
005bfb44  CALL 0x00610980
005bfb49  ADD ESP,0x4
005bfb4c  JMP 0x005bfb9c
005bfb4e  MOV EDX,dword ptr [EBP + 0xffffff54]
005bfb54  MOV EAX,dword ptr [EDX + 0x14]
005bfb57  ADD EAX,0x70
005bfb5a  PUSH EAX
005bfb5b  CALL 0x00610980
005bfb60  ADD ESP,0x4
005bfb63  MOV ECX,dword ptr [EBP + 0xffffff54]
005bfb69  MOV dword ptr [ECX + 0x18],0x0
005bfb70  JMP 0x005bfb9c
005bfb72  MOV EDX,dword ptr [EBP + 0xffffff54]
005bfb78  MOV EAX,dword ptr [EDX + 0x18]
005bfb7b  SUB EAX,0x1
005bfb7e  MOV ECX,dword ptr [EBP + 0xffffff54]
005bfb84  MOV dword ptr [ECX + 0x18],EAX
005bfb87  MOV EDX,dword ptr [EBP + 0xffffff54]
005bfb8d  MOV EAX,dword ptr [EDX + 0x14]
005bfb90  ADD EAX,0x50
005bfb93  PUSH EAX
005bfb94  CALL 0x00610980
005bfb99  ADD ESP,0x4
005bfb9c  MOV ECX,dword ptr [EBP + 0xffffff54]
005bfba2  CALL 0x005bfc00
005bfba7  MOV AL,byte ptr [EBP + -0x15]
005bfbaa  MOV ECX,dword ptr [EBP + -0xc]
005bfbad  MOV dword ptr FS:[0x0],ECX
005bfbb4  POP ECX
005bfbb5  MOV ESP,EBP
005bfbb7  POP EBP
005bfbb8  RET 0x4
