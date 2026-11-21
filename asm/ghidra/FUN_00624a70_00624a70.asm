; FUN_00624a70  00624a70
00624a70  PUSH EBP
00624a71  MOV EBP,ESP
00624a73  SUB ESP,0x40
00624a76  MOV EAX,dword ptr [EBP + 0x10]
00624a79  PUSH EAX
00624a7a  MOV ECX,dword ptr [EBP + 0x14]
00624a7d  PUSH ECX
00624a7e  LEA EDX,[EBP + -0x10]
00624a81  PUSH EDX
00624a82  CALL 0x005ec3a0
00624a87  ADD ESP,0xc
00624a8a  MOVZX EAX,AL
00624a8d  TEST EAX,EAX
00624a8f  JNZ 0x00624ab8
00624a91  PUSH 0x10
00624a93  PUSH 0x0
00624a95  MOV ECX,dword ptr [EBP + 0x8]
00624a98  PUSH ECX
00624a99  CALL 0x00686fa2
00624a9e  ADD ESP,0xc
00624aa1  PUSH 0x10
00624aa3  PUSH 0x0
00624aa5  MOV EDX,dword ptr [EBP + 0x10]
00624aa8  PUSH EDX
00624aa9  CALL 0x00686fa2
00624aae  ADD ESP,0xc
00624ab1  XOR AL,AL
00624ab3  JMP 0x00624c42
00624ab8  MOV EAX,dword ptr [EBP + 0x10]
00624abb  MOV ECX,dword ptr [EBP + -0x10]
00624abe  SUB ECX,dword ptr [EAX]
00624ac0  MOV dword ptr [EBP + -0x40],ECX
00624ac3  MOV EDX,dword ptr [EBP + 0x10]
00624ac6  MOV EAX,dword ptr [EBP + -0xc]
00624ac9  SUB EAX,dword ptr [EDX + 0x4]
00624acc  MOV dword ptr [EBP + -0x3c],EAX
00624acf  MOV ECX,dword ptr [EBP + 0x10]
00624ad2  MOV EDX,dword ptr [EBP + -0x8]
00624ad5  SUB EDX,dword ptr [ECX + 0x8]
00624ad8  MOV dword ptr [EBP + -0x38],EDX
00624adb  MOV EAX,dword ptr [EBP + 0x10]
00624ade  MOV ECX,dword ptr [EBP + -0x4]
00624ae1  SUB ECX,dword ptr [EAX + 0xc]
00624ae4  MOV dword ptr [EBP + -0x34],ECX
00624ae7  MOV EDX,dword ptr [EBP + 0x8]
00624aea  MOV EAX,dword ptr [EDX]
00624aec  ADD EAX,dword ptr [EBP + -0x40]
00624aef  MOV ECX,dword ptr [EBP + 0x8]
00624af2  MOV dword ptr [ECX],EAX
00624af4  MOV EDX,dword ptr [EBP + 0x8]
00624af7  MOV EAX,dword ptr [EDX + 0x4]
00624afa  ADD EAX,dword ptr [EBP + -0x3c]
00624afd  MOV ECX,dword ptr [EBP + 0x8]
00624b00  MOV dword ptr [ECX + 0x4],EAX
00624b03  MOV EDX,dword ptr [EBP + 0x8]
00624b06  MOV EAX,dword ptr [EDX + 0x8]
00624b09  ADD EAX,dword ptr [EBP + -0x38]
00624b0c  MOV ECX,dword ptr [EBP + 0x8]
00624b0f  MOV dword ptr [ECX + 0x8],EAX
00624b12  MOV EDX,dword ptr [EBP + 0x8]
00624b15  MOV EAX,dword ptr [EDX + 0xc]
00624b18  ADD EAX,dword ptr [EBP + -0x34]
00624b1b  MOV ECX,dword ptr [EBP + 0x8]
00624b1e  MOV dword ptr [ECX + 0xc],EAX
00624b21  MOV EDX,dword ptr [EBP + 0x10]
00624b24  MOV EAX,dword ptr [EDX]
00624b26  ADD EAX,dword ptr [EBP + -0x40]
00624b29  MOV ECX,dword ptr [EBP + 0x10]
00624b2c  MOV dword ptr [ECX],EAX
00624b2e  MOV EDX,dword ptr [EBP + 0x10]
00624b31  MOV EAX,dword ptr [EDX + 0x4]
00624b34  ADD EAX,dword ptr [EBP + -0x3c]
00624b37  MOV ECX,dword ptr [EBP + 0x10]
00624b3a  MOV dword ptr [ECX + 0x4],EAX
00624b3d  MOV EDX,dword ptr [EBP + 0x10]
00624b40  MOV EAX,dword ptr [EDX + 0x8]
00624b43  ADD EAX,dword ptr [EBP + -0x38]
00624b46  MOV ECX,dword ptr [EBP + 0x10]
00624b49  MOV dword ptr [ECX + 0x8],EAX
00624b4c  MOV EDX,dword ptr [EBP + 0x10]
00624b4f  MOV EAX,dword ptr [EDX + 0xc]
00624b52  ADD EAX,dword ptr [EBP + -0x34]
00624b55  MOV ECX,dword ptr [EBP + 0x10]
00624b58  MOV dword ptr [ECX + 0xc],EAX
00624b5b  MOV EDX,dword ptr [EBP + 0x8]
00624b5e  PUSH EDX
00624b5f  MOV EAX,dword ptr [EBP + 0xc]
00624b62  PUSH EAX
00624b63  LEA ECX,[EBP + -0x20]
00624b66  PUSH ECX
00624b67  CALL 0x005ec3a0
00624b6c  ADD ESP,0xc
00624b6f  MOVZX EDX,AL
00624b72  TEST EDX,EDX
00624b74  JNZ 0x00624b9d
00624b76  PUSH 0x10
00624b78  PUSH 0x0
00624b7a  MOV EAX,dword ptr [EBP + 0x8]
00624b7d  PUSH EAX
00624b7e  CALL 0x00686fa2
00624b83  ADD ESP,0xc
00624b86  PUSH 0x10
00624b88  PUSH 0x0
00624b8a  MOV ECX,dword ptr [EBP + 0x10]
00624b8d  PUSH ECX
00624b8e  CALL 0x00686fa2
00624b93  ADD ESP,0xc
00624b96  XOR AL,AL
00624b98  JMP 0x00624c42
00624b9d  MOV EDX,dword ptr [EBP + 0x8]
00624ba0  MOV EAX,dword ptr [EBP + -0x20]
00624ba3  SUB EAX,dword ptr [EDX]
00624ba5  MOV dword ptr [EBP + -0x30],EAX
00624ba8  MOV ECX,dword ptr [EBP + 0x8]
00624bab  MOV EDX,dword ptr [EBP + -0x1c]
00624bae  SUB EDX,dword ptr [ECX + 0x4]
00624bb1  MOV dword ptr [EBP + -0x2c],EDX
00624bb4  MOV EAX,dword ptr [EBP + 0x8]
00624bb7  MOV ECX,dword ptr [EBP + -0x18]
00624bba  SUB ECX,dword ptr [EAX + 0x8]
00624bbd  MOV dword ptr [EBP + -0x28],ECX
00624bc0  MOV EDX,dword ptr [EBP + 0x8]
00624bc3  MOV EAX,dword ptr [EBP + -0x14]
00624bc6  SUB EAX,dword ptr [EDX + 0xc]
00624bc9  MOV dword ptr [EBP + -0x24],EAX
00624bcc  MOV ECX,dword ptr [EBP + 0x10]
00624bcf  MOV EDX,dword ptr [ECX]
00624bd1  ADD EDX,dword ptr [EBP + -0x30]
00624bd4  MOV EAX,dword ptr [EBP + 0x10]
00624bd7  MOV dword ptr [EAX],EDX
00624bd9  MOV ECX,dword ptr [EBP + 0x10]
00624bdc  MOV EDX,dword ptr [ECX + 0x4]
00624bdf  ADD EDX,dword ptr [EBP + -0x2c]
00624be2  MOV EAX,dword ptr [EBP + 0x10]
00624be5  MOV dword ptr [EAX + 0x4],EDX
00624be8  MOV ECX,dword ptr [EBP + 0x10]
00624beb  MOV EDX,dword ptr [ECX + 0x8]
00624bee  ADD EDX,dword ptr [EBP + -0x28]
00624bf1  MOV EAX,dword ptr [EBP + 0x10]
00624bf4  MOV dword ptr [EAX + 0x8],EDX
00624bf7  MOV ECX,dword ptr [EBP + 0x10]
00624bfa  MOV EDX,dword ptr [ECX + 0xc]
00624bfd  ADD EDX,dword ptr [EBP + -0x24]
00624c00  MOV EAX,dword ptr [EBP + 0x10]
00624c03  MOV dword ptr [EAX + 0xc],EDX
00624c06  MOV ECX,dword ptr [EBP + 0x8]
00624c09  MOV EDX,dword ptr [ECX]
00624c0b  ADD EDX,dword ptr [EBP + -0x30]
00624c0e  MOV EAX,dword ptr [EBP + 0x8]
00624c11  MOV dword ptr [EAX],EDX
00624c13  MOV ECX,dword ptr [EBP + 0x8]
00624c16  MOV EDX,dword ptr [ECX + 0x4]
00624c19  ADD EDX,dword ptr [EBP + -0x2c]
00624c1c  MOV EAX,dword ptr [EBP + 0x8]
00624c1f  MOV dword ptr [EAX + 0x4],EDX
00624c22  MOV ECX,dword ptr [EBP + 0x8]
00624c25  MOV EDX,dword ptr [ECX + 0x8]
00624c28  ADD EDX,dword ptr [EBP + -0x28]
00624c2b  MOV EAX,dword ptr [EBP + 0x8]
00624c2e  MOV dword ptr [EAX + 0x8],EDX
00624c31  MOV ECX,dword ptr [EBP + 0x8]
00624c34  MOV EDX,dword ptr [ECX + 0xc]
00624c37  ADD EDX,dword ptr [EBP + -0x24]
00624c3a  MOV EAX,dword ptr [EBP + 0x8]
00624c3d  MOV dword ptr [EAX + 0xc],EDX
00624c40  MOV AL,0x1
00624c42  MOV ESP,EBP
00624c44  POP EBP
00624c45  RET
