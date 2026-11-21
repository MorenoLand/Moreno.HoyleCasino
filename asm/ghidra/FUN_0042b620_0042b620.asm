; FUN_0042b620  0042b620
0042b620  PUSH EBP
0042b621  MOV EBP,ESP
0042b623  SUB ESP,0x38
0042b626  MOV dword ptr [EBP + -0x4],ECX
0042b629  MOV EAX,dword ptr [EBP + 0x8]
0042b62c  MOV dword ptr [EBP + -0x8],EAX
0042b62f  MOV ECX,dword ptr [EBP + -0x8]
0042b632  SUB ECX,0x4
0042b635  MOV dword ptr [EBP + -0x8],ECX
0042b638  CMP dword ptr [EBP + -0x8],0x6
0042b63c  JA 0x0042b8c0
0042b642  MOV EDX,dword ptr [EBP + -0x8]
0042b645  JMP dword ptr [EDX*0x4 + 0x42b8c8]
0042b64c  PUSH 0x1f
0042b64e  MOV ECX,dword ptr [0x007906d4]
0042b654  CALL 0x00434880
0042b659  MOV ECX,dword ptr [EBP + -0x4]
0042b65c  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x14]
0042b660  MOV dword ptr [EBP + -0xc],EDX
0042b663  PUSH 0x0
0042b665  MOV EAX,dword ptr [EBP + 0xc]
0042b668  PUSH EAX
0042b669  MOV ECX,dword ptr [EBP + -0xc]
0042b66c  MOV EDX,dword ptr [ECX]
0042b66e  MOV ECX,dword ptr [EBP + -0xc]
0042b671  MOV EAX,dword ptr [EDX + 0xd4]
0042b677  CALL EAX
0042b679  MOV ECX,dword ptr [EBP + 0x10]
0042b67c  MOV dword ptr [ECX],EAX
0042b67e  PUSH 0x1f
0042b680  MOV ECX,dword ptr [0x007906d4]
0042b686  CALL 0x00434880
0042b68b  MOV EDX,dword ptr [EBP + -0x4]
0042b68e  MOV EAX,dword ptr [EDX + EAX*0x4 + 0x14]
0042b692  MOV dword ptr [EBP + -0x10],EAX
0042b695  PUSH 0x0
0042b697  MOV ECX,dword ptr [EBP + 0xc]
0042b69a  PUSH ECX
0042b69b  MOV EDX,dword ptr [EBP + -0x10]
0042b69e  MOV EAX,dword ptr [EDX]
0042b6a0  MOV ECX,dword ptr [EBP + -0x10]
0042b6a3  MOV EDX,dword ptr [EAX + 0xd8]
0042b6a9  CALL EDX
0042b6ab  MOV ECX,dword ptr [EBP + 0x10]
0042b6ae  MOV dword ptr [ECX + 0x4],EAX
0042b6b1  JMP 0x0042b8c0
0042b6b6  PUSH 0x20
0042b6b8  MOV ECX,dword ptr [0x007906d4]
0042b6be  CALL 0x00434880
0042b6c3  MOV EDX,dword ptr [EBP + -0x4]
0042b6c6  MOV EAX,dword ptr [EDX + EAX*0x4 + 0x14]
0042b6ca  MOV dword ptr [EBP + -0x14],EAX
0042b6cd  PUSH 0x0
0042b6cf  MOV ECX,dword ptr [EBP + 0xc]
0042b6d2  PUSH ECX
0042b6d3  MOV EDX,dword ptr [EBP + -0x14]
0042b6d6  MOV EAX,dword ptr [EDX]
0042b6d8  MOV ECX,dword ptr [EBP + -0x14]
0042b6db  MOV EDX,dword ptr [EAX + 0xd4]
0042b6e1  CALL EDX
0042b6e3  MOV ECX,dword ptr [EBP + 0x10]
0042b6e6  MOV dword ptr [ECX],EAX
0042b6e8  PUSH 0x20
0042b6ea  MOV ECX,dword ptr [0x007906d4]
0042b6f0  CALL 0x00434880
0042b6f5  MOV EDX,dword ptr [EBP + -0x4]
0042b6f8  MOV EAX,dword ptr [EDX + EAX*0x4 + 0x14]
0042b6fc  MOV dword ptr [EBP + -0x18],EAX
0042b6ff  PUSH 0x0
0042b701  MOV ECX,dword ptr [EBP + 0xc]
0042b704  PUSH ECX
0042b705  MOV EDX,dword ptr [EBP + -0x18]
0042b708  MOV EAX,dword ptr [EDX]
0042b70a  MOV ECX,dword ptr [EBP + -0x18]
0042b70d  MOV EDX,dword ptr [EAX + 0xd8]
0042b713  CALL EDX
0042b715  MOV ECX,dword ptr [EBP + 0x10]
0042b718  MOV dword ptr [ECX + 0x4],EAX
0042b71b  JMP 0x0042b8c0
0042b720  PUSH 0x21
0042b722  MOV ECX,dword ptr [0x007906d4]
0042b728  CALL 0x00434880
0042b72d  MOV EDX,dword ptr [EBP + -0x4]
0042b730  MOV EAX,dword ptr [EDX + EAX*0x4 + 0x14]
0042b734  MOV dword ptr [EBP + -0x1c],EAX
0042b737  PUSH 0x0
0042b739  MOV ECX,dword ptr [EBP + 0xc]
0042b73c  PUSH ECX
0042b73d  MOV EDX,dword ptr [EBP + -0x1c]
0042b740  MOV EAX,dword ptr [EDX]
0042b742  MOV ECX,dword ptr [EBP + -0x1c]
0042b745  MOV EDX,dword ptr [EAX + 0xd4]
0042b74b  CALL EDX
0042b74d  MOV ECX,dword ptr [EBP + 0x10]
0042b750  MOV dword ptr [ECX],EAX
0042b752  PUSH 0x21
0042b754  MOV ECX,dword ptr [0x007906d4]
0042b75a  CALL 0x00434880
0042b75f  MOV EDX,dword ptr [EBP + -0x4]
0042b762  MOV EAX,dword ptr [EDX + EAX*0x4 + 0x14]
0042b766  MOV dword ptr [EBP + -0x20],EAX
0042b769  PUSH 0x0
0042b76b  MOV ECX,dword ptr [EBP + 0xc]
0042b76e  PUSH ECX
0042b76f  MOV EDX,dword ptr [EBP + -0x20]
0042b772  MOV EAX,dword ptr [EDX]
0042b774  MOV ECX,dword ptr [EBP + -0x20]
0042b777  MOV EDX,dword ptr [EAX + 0xd8]
0042b77d  CALL EDX
0042b77f  MOV ECX,dword ptr [EBP + 0x10]
0042b782  MOV dword ptr [ECX + 0x4],EAX
0042b785  JMP 0x0042b8c0
0042b78a  PUSH 0x22
0042b78c  MOV ECX,dword ptr [0x007906d4]
0042b792  CALL 0x00434880
0042b797  MOV EDX,dword ptr [EBP + -0x4]
0042b79a  MOV EAX,dword ptr [EDX + EAX*0x4 + 0x14]
0042b79e  MOV dword ptr [EBP + -0x24],EAX
0042b7a1  PUSH 0x0
0042b7a3  MOV ECX,dword ptr [EBP + 0xc]
0042b7a6  PUSH ECX
0042b7a7  MOV EDX,dword ptr [EBP + -0x24]
0042b7aa  MOV EAX,dword ptr [EDX]
0042b7ac  MOV ECX,dword ptr [EBP + -0x24]
0042b7af  MOV EDX,dword ptr [EAX + 0xd4]
0042b7b5  CALL EDX
0042b7b7  MOV ECX,dword ptr [EBP + 0x10]
0042b7ba  MOV dword ptr [ECX],EAX
0042b7bc  PUSH 0x22
0042b7be  MOV ECX,dword ptr [0x007906d4]
0042b7c4  CALL 0x00434880
0042b7c9  MOV EDX,dword ptr [EBP + -0x4]
0042b7cc  MOV EAX,dword ptr [EDX + EAX*0x4 + 0x14]
0042b7d0  MOV dword ptr [EBP + -0x28],EAX
0042b7d3  PUSH 0x0
0042b7d5  MOV ECX,dword ptr [EBP + 0xc]
0042b7d8  PUSH ECX
0042b7d9  MOV EDX,dword ptr [EBP + -0x28]
0042b7dc  MOV EAX,dword ptr [EDX]
0042b7de  MOV ECX,dword ptr [EBP + -0x28]
0042b7e1  MOV EDX,dword ptr [EAX + 0xd8]
0042b7e7  CALL EDX
0042b7e9  MOV ECX,dword ptr [EBP + 0x10]
0042b7ec  MOV dword ptr [ECX + 0x4],EAX
0042b7ef  JMP 0x0042b8c0
0042b7f4  PUSH 0x23
0042b7f6  MOV ECX,dword ptr [0x007906d4]
0042b7fc  CALL 0x00434880
0042b801  MOV EDX,dword ptr [EBP + -0x4]
0042b804  MOV EAX,dword ptr [EDX + EAX*0x4 + 0x14]
0042b808  MOV dword ptr [EBP + -0x2c],EAX
0042b80b  PUSH 0x0
0042b80d  MOV ECX,dword ptr [EBP + 0xc]
0042b810  PUSH ECX
0042b811  MOV EDX,dword ptr [EBP + -0x2c]
0042b814  MOV EAX,dword ptr [EDX]
0042b816  MOV ECX,dword ptr [EBP + -0x2c]
0042b819  MOV EDX,dword ptr [EAX + 0xd4]
0042b81f  CALL EDX
0042b821  MOV ECX,dword ptr [EBP + 0x10]
0042b824  MOV dword ptr [ECX],EAX
0042b826  PUSH 0x23
0042b828  MOV ECX,dword ptr [0x007906d4]
0042b82e  CALL 0x00434880
0042b833  MOV EDX,dword ptr [EBP + -0x4]
0042b836  MOV EAX,dword ptr [EDX + EAX*0x4 + 0x14]
0042b83a  MOV dword ptr [EBP + -0x30],EAX
0042b83d  PUSH 0x0
0042b83f  MOV ECX,dword ptr [EBP + 0xc]
0042b842  PUSH ECX
0042b843  MOV EDX,dword ptr [EBP + -0x30]
0042b846  MOV EAX,dword ptr [EDX]
0042b848  MOV ECX,dword ptr [EBP + -0x30]
0042b84b  MOV EDX,dword ptr [EAX + 0xd8]
0042b851  CALL EDX
0042b853  MOV ECX,dword ptr [EBP + 0x10]
0042b856  MOV dword ptr [ECX + 0x4],EAX
0042b859  JMP 0x0042b8c0
0042b85b  PUSH 0x24
0042b85d  MOV ECX,dword ptr [0x007906d4]
0042b863  CALL 0x00434880
0042b868  MOV EDX,dword ptr [EBP + -0x4]
0042b86b  MOV EAX,dword ptr [EDX + EAX*0x4 + 0x14]
0042b86f  MOV dword ptr [EBP + -0x34],EAX
0042b872  PUSH 0x0
0042b874  MOV ECX,dword ptr [EBP + 0xc]
0042b877  PUSH ECX
0042b878  MOV EDX,dword ptr [EBP + -0x34]
0042b87b  MOV EAX,dword ptr [EDX]
0042b87d  MOV ECX,dword ptr [EBP + -0x34]
0042b880  MOV EDX,dword ptr [EAX + 0xd4]
0042b886  CALL EDX
0042b888  MOV ECX,dword ptr [EBP + 0x10]
0042b88b  MOV dword ptr [ECX],EAX
0042b88d  PUSH 0x24
0042b88f  MOV ECX,dword ptr [0x007906d4]
0042b895  CALL 0x00434880
0042b89a  MOV EDX,dword ptr [EBP + -0x4]
0042b89d  MOV EAX,dword ptr [EDX + EAX*0x4 + 0x14]
0042b8a1  MOV dword ptr [EBP + -0x38],EAX
0042b8a4  PUSH 0x0
0042b8a6  MOV ECX,dword ptr [EBP + 0xc]
0042b8a9  PUSH ECX
0042b8aa  MOV EDX,dword ptr [EBP + -0x38]
0042b8ad  MOV EAX,dword ptr [EDX]
0042b8af  MOV ECX,dword ptr [EBP + -0x38]
0042b8b2  MOV EDX,dword ptr [EAX + 0xd8]
0042b8b8  CALL EDX
0042b8ba  MOV ECX,dword ptr [EBP + 0x10]
0042b8bd  MOV dword ptr [ECX + 0x4],EAX
0042b8c0  MOV ESP,EBP
0042b8c2  POP EBP
0042b8c3  RET 0xc
