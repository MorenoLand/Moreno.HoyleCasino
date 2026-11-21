; FUN_004c5b20  004c5b20
004c5b20  PUSH EBP
004c5b21  MOV EBP,ESP
004c5b23  PUSH -0x1
004c5b25  PUSH 0x6a21b9
004c5b2a  MOV EAX,FS:[0x0]
004c5b30  PUSH EAX
004c5b31  SUB ESP,0xc8
004c5b37  MOV EAX,[0x00781870]
004c5b3c  XOR EAX,EBP
004c5b3e  PUSH EAX
004c5b3f  LEA EAX,[EBP + -0xc]
004c5b42  MOV FS:[0x0],EAX
004c5b48  MOV dword ptr [EBP + 0xffffff6c],ECX
004c5b4e  MOV EAX,dword ptr [EBP + 0xffffff6c]
004c5b54  MOV dword ptr [EAX],0x6bf380
004c5b5a  MOV dword ptr [EBP + -0x4],0x0
004c5b61  MOV ECX,dword ptr [EBP + 0xffffff6c]
004c5b67  CMP dword ptr [ECX + 0x8],0x0
004c5b6b  JZ 0x004c5bb2
004c5b6d  MOV EDX,dword ptr [EBP + 0xffffff6c]
004c5b73  MOV EAX,dword ptr [EDX + 0x8]
004c5b76  MOV dword ptr [EBP + -0x18],EAX
004c5b79  MOV ECX,dword ptr [EBP + -0x18]
004c5b7c  MOV dword ptr [EBP + -0x14],ECX
004c5b7f  CMP dword ptr [EBP + -0x14],0x0
004c5b83  JZ 0x004c5b9b
004c5b85  PUSH 0x1
004c5b87  MOV EDX,dword ptr [EBP + -0x14]
004c5b8a  MOV EAX,dword ptr [EDX]
004c5b8c  MOV ECX,dword ptr [EBP + -0x14]
004c5b8f  MOV EDX,dword ptr [EAX]
004c5b91  CALL EDX
004c5b93  MOV dword ptr [EBP + 0xffffff68],EAX
004c5b99  JMP 0x004c5ba5
004c5b9b  MOV dword ptr [EBP + 0xffffff68],0x0
004c5ba5  MOV EAX,dword ptr [EBP + 0xffffff6c]
004c5bab  MOV dword ptr [EAX + 0x8],0x0
004c5bb2  MOV ECX,dword ptr [EBP + 0xffffff6c]
004c5bb8  CMP dword ptr [ECX + 0xc],0x0
004c5bbc  JZ 0x004c5c03
004c5bbe  MOV EDX,dword ptr [EBP + 0xffffff6c]
004c5bc4  MOV EAX,dword ptr [EDX + 0xc]
004c5bc7  MOV dword ptr [EBP + -0x20],EAX
004c5bca  MOV ECX,dword ptr [EBP + -0x20]
004c5bcd  MOV dword ptr [EBP + -0x1c],ECX
004c5bd0  CMP dword ptr [EBP + -0x1c],0x0
004c5bd4  JZ 0x004c5bec
004c5bd6  PUSH 0x1
004c5bd8  MOV EDX,dword ptr [EBP + -0x1c]
004c5bdb  MOV EAX,dword ptr [EDX]
004c5bdd  MOV ECX,dword ptr [EBP + -0x1c]
004c5be0  MOV EDX,dword ptr [EAX]
004c5be2  CALL EDX
004c5be4  MOV dword ptr [EBP + 0xffffff64],EAX
004c5bea  JMP 0x004c5bf6
004c5bec  MOV dword ptr [EBP + 0xffffff64],0x0
004c5bf6  MOV EAX,dword ptr [EBP + 0xffffff6c]
004c5bfc  MOV dword ptr [EAX + 0xc],0x0
004c5c03  MOV ECX,dword ptr [EBP + 0xffffff6c]
004c5c09  CMP dword ptr [ECX + 0x20],0x0
004c5c0d  JZ 0x004c5c54
004c5c0f  MOV EDX,dword ptr [EBP + 0xffffff6c]
004c5c15  MOV EAX,dword ptr [EDX + 0x20]
004c5c18  MOV dword ptr [EBP + -0x28],EAX
004c5c1b  MOV ECX,dword ptr [EBP + -0x28]
004c5c1e  MOV dword ptr [EBP + -0x24],ECX
004c5c21  CMP dword ptr [EBP + -0x24],0x0
004c5c25  JZ 0x004c5c3d
004c5c27  PUSH 0x1
004c5c29  MOV EDX,dword ptr [EBP + -0x24]
004c5c2c  MOV EAX,dword ptr [EDX]
004c5c2e  MOV ECX,dword ptr [EBP + -0x24]
004c5c31  MOV EDX,dword ptr [EAX]
004c5c33  CALL EDX
004c5c35  MOV dword ptr [EBP + 0xffffff60],EAX
004c5c3b  JMP 0x004c5c47
004c5c3d  MOV dword ptr [EBP + 0xffffff60],0x0
004c5c47  MOV EAX,dword ptr [EBP + 0xffffff6c]
004c5c4d  MOV dword ptr [EAX + 0x20],0x0
004c5c54  MOV ECX,dword ptr [EBP + 0xffffff6c]
004c5c5a  CMP dword ptr [ECX + 0x24],0x0
004c5c5e  JZ 0x004c5ca5
004c5c60  MOV EDX,dword ptr [EBP + 0xffffff6c]
004c5c66  MOV EAX,dword ptr [EDX + 0x24]
004c5c69  MOV dword ptr [EBP + -0x30],EAX
004c5c6c  MOV ECX,dword ptr [EBP + -0x30]
004c5c6f  MOV dword ptr [EBP + -0x2c],ECX
004c5c72  CMP dword ptr [EBP + -0x2c],0x0
004c5c76  JZ 0x004c5c8e
004c5c78  PUSH 0x1
004c5c7a  MOV EDX,dword ptr [EBP + -0x2c]
004c5c7d  MOV EAX,dword ptr [EDX]
004c5c7f  MOV ECX,dword ptr [EBP + -0x2c]
004c5c82  MOV EDX,dword ptr [EAX]
004c5c84  CALL EDX
004c5c86  MOV dword ptr [EBP + 0xffffff5c],EAX
004c5c8c  JMP 0x004c5c98
004c5c8e  MOV dword ptr [EBP + 0xffffff5c],0x0
004c5c98  MOV EAX,dword ptr [EBP + 0xffffff6c]
004c5c9e  MOV dword ptr [EAX + 0x24],0x0
004c5ca5  MOV ECX,dword ptr [EBP + 0xffffff6c]
004c5cab  CMP dword ptr [ECX + 0x28],0x0
004c5caf  JZ 0x004c5cf6
004c5cb1  MOV EDX,dword ptr [EBP + 0xffffff6c]
004c5cb7  MOV EAX,dword ptr [EDX + 0x28]
004c5cba  MOV dword ptr [EBP + -0x38],EAX
004c5cbd  MOV ECX,dword ptr [EBP + -0x38]
004c5cc0  MOV dword ptr [EBP + -0x34],ECX
004c5cc3  CMP dword ptr [EBP + -0x34],0x0
004c5cc7  JZ 0x004c5cdf
004c5cc9  PUSH 0x1
004c5ccb  MOV EDX,dword ptr [EBP + -0x34]
004c5cce  MOV EAX,dword ptr [EDX]
004c5cd0  MOV ECX,dword ptr [EBP + -0x34]
004c5cd3  MOV EDX,dword ptr [EAX]
004c5cd5  CALL EDX
004c5cd7  MOV dword ptr [EBP + 0xffffff58],EAX
004c5cdd  JMP 0x004c5ce9
004c5cdf  MOV dword ptr [EBP + 0xffffff58],0x0
004c5ce9  MOV EAX,dword ptr [EBP + 0xffffff6c]
004c5cef  MOV dword ptr [EAX + 0x28],0x0
004c5cf6  MOV ECX,dword ptr [EBP + 0xffffff6c]
004c5cfc  CMP dword ptr [ECX + 0x2c],0x0
004c5d00  JZ 0x004c5d47
004c5d02  MOV EDX,dword ptr [EBP + 0xffffff6c]
004c5d08  MOV EAX,dword ptr [EDX + 0x2c]
004c5d0b  MOV dword ptr [EBP + -0x40],EAX
004c5d0e  MOV ECX,dword ptr [EBP + -0x40]
004c5d11  MOV dword ptr [EBP + -0x3c],ECX
004c5d14  CMP dword ptr [EBP + -0x3c],0x0
004c5d18  JZ 0x004c5d30
004c5d1a  PUSH 0x1
004c5d1c  MOV EDX,dword ptr [EBP + -0x3c]
004c5d1f  MOV EAX,dword ptr [EDX]
004c5d21  MOV ECX,dword ptr [EBP + -0x3c]
004c5d24  MOV EDX,dword ptr [EAX]
004c5d26  CALL EDX
004c5d28  MOV dword ptr [EBP + 0xffffff54],EAX
004c5d2e  JMP 0x004c5d3a
004c5d30  MOV dword ptr [EBP + 0xffffff54],0x0
004c5d3a  MOV EAX,dword ptr [EBP + 0xffffff6c]
004c5d40  MOV dword ptr [EAX + 0x2c],0x0
004c5d47  MOV ECX,dword ptr [EBP + 0xffffff6c]
004c5d4d  CMP dword ptr [ECX + 0x30],0x0
004c5d51  JZ 0x004c5d98
004c5d53  MOV EDX,dword ptr [EBP + 0xffffff6c]
004c5d59  MOV EAX,dword ptr [EDX + 0x30]
004c5d5c  MOV dword ptr [EBP + -0x48],EAX
004c5d5f  MOV ECX,dword ptr [EBP + -0x48]
004c5d62  MOV dword ptr [EBP + -0x44],ECX
004c5d65  CMP dword ptr [EBP + -0x44],0x0
004c5d69  JZ 0x004c5d81
004c5d6b  PUSH 0x1
004c5d6d  MOV EDX,dword ptr [EBP + -0x44]
004c5d70  MOV EAX,dword ptr [EDX]
004c5d72  MOV ECX,dword ptr [EBP + -0x44]
004c5d75  MOV EDX,dword ptr [EAX]
004c5d77  CALL EDX
004c5d79  MOV dword ptr [EBP + 0xffffff50],EAX
004c5d7f  JMP 0x004c5d8b
004c5d81  MOV dword ptr [EBP + 0xffffff50],0x0
004c5d8b  MOV EAX,dword ptr [EBP + 0xffffff6c]
004c5d91  MOV dword ptr [EAX + 0x30],0x0
004c5d98  MOV ECX,dword ptr [EBP + 0xffffff6c]
004c5d9e  CMP dword ptr [ECX + 0x34],0x0
004c5da2  JZ 0x004c5de9
004c5da4  MOV EDX,dword ptr [EBP + 0xffffff6c]
004c5daa  MOV EAX,dword ptr [EDX + 0x34]
004c5dad  MOV dword ptr [EBP + -0x50],EAX
004c5db0  MOV ECX,dword ptr [EBP + -0x50]
004c5db3  MOV dword ptr [EBP + -0x4c],ECX
004c5db6  CMP dword ptr [EBP + -0x4c],0x0
004c5dba  JZ 0x004c5dd2
004c5dbc  PUSH 0x1
004c5dbe  MOV EDX,dword ptr [EBP + -0x4c]
004c5dc1  MOV EAX,dword ptr [EDX]
004c5dc3  MOV ECX,dword ptr [EBP + -0x4c]
004c5dc6  MOV EDX,dword ptr [EAX]
004c5dc8  CALL EDX
004c5dca  MOV dword ptr [EBP + 0xffffff4c],EAX
004c5dd0  JMP 0x004c5ddc
004c5dd2  MOV dword ptr [EBP + 0xffffff4c],0x0
004c5ddc  MOV EAX,dword ptr [EBP + 0xffffff6c]
004c5de2  MOV dword ptr [EAX + 0x34],0x0
004c5de9  MOV ECX,dword ptr [EBP + 0xffffff6c]
004c5def  CMP dword ptr [ECX + 0x38],0x0
004c5df3  JZ 0x004c5e3a
004c5df5  MOV EDX,dword ptr [EBP + 0xffffff6c]
004c5dfb  MOV EAX,dword ptr [EDX + 0x38]
004c5dfe  MOV dword ptr [EBP + -0x58],EAX
004c5e01  MOV ECX,dword ptr [EBP + -0x58]
004c5e04  MOV dword ptr [EBP + -0x54],ECX
004c5e07  CMP dword ptr [EBP + -0x54],0x0
004c5e0b  JZ 0x004c5e23
004c5e0d  PUSH 0x1
004c5e0f  MOV EDX,dword ptr [EBP + -0x54]
004c5e12  MOV EAX,dword ptr [EDX]
004c5e14  MOV ECX,dword ptr [EBP + -0x54]
004c5e17  MOV EDX,dword ptr [EAX]
004c5e19  CALL EDX
004c5e1b  MOV dword ptr [EBP + 0xffffff48],EAX
004c5e21  JMP 0x004c5e2d
004c5e23  MOV dword ptr [EBP + 0xffffff48],0x0
004c5e2d  MOV EAX,dword ptr [EBP + 0xffffff6c]
004c5e33  MOV dword ptr [EAX + 0x38],0x0
004c5e3a  MOV ECX,dword ptr [EBP + 0xffffff6c]
004c5e40  CMP dword ptr [ECX + 0x44],0x0
004c5e44  JZ 0x004c5e8b
004c5e46  MOV EDX,dword ptr [EBP + 0xffffff6c]
004c5e4c  MOV EAX,dword ptr [EDX + 0x44]
004c5e4f  MOV dword ptr [EBP + -0x60],EAX
004c5e52  MOV ECX,dword ptr [EBP + -0x60]
004c5e55  MOV dword ptr [EBP + -0x5c],ECX
004c5e58  CMP dword ptr [EBP + -0x5c],0x0
004c5e5c  JZ 0x004c5e74
004c5e5e  PUSH 0x1
004c5e60  MOV EDX,dword ptr [EBP + -0x5c]
004c5e63  MOV EAX,dword ptr [EDX]
004c5e65  MOV ECX,dword ptr [EBP + -0x5c]
004c5e68  MOV EDX,dword ptr [EAX]
004c5e6a  CALL EDX
004c5e6c  MOV dword ptr [EBP + 0xffffff44],EAX
004c5e72  JMP 0x004c5e7e
004c5e74  MOV dword ptr [EBP + 0xffffff44],0x0
004c5e7e  MOV EAX,dword ptr [EBP + 0xffffff6c]
004c5e84  MOV dword ptr [EAX + 0x44],0x0
004c5e8b  MOV ECX,dword ptr [EBP + 0xffffff6c]
004c5e91  CMP dword ptr [ECX + 0x3c],0x0
004c5e95  JZ 0x004c5edc
004c5e97  MOV EDX,dword ptr [EBP + 0xffffff6c]
004c5e9d  MOV EAX,dword ptr [EDX + 0x3c]
004c5ea0  MOV dword ptr [EBP + -0x68],EAX
004c5ea3  MOV ECX,dword ptr [EBP + -0x68]
004c5ea6  MOV dword ptr [EBP + -0x64],ECX
004c5ea9  CMP dword ptr [EBP + -0x64],0x0
004c5ead  JZ 0x004c5ec5
004c5eaf  PUSH 0x1
004c5eb1  MOV EDX,dword ptr [EBP + -0x64]
004c5eb4  MOV EAX,dword ptr [EDX]
004c5eb6  MOV ECX,dword ptr [EBP + -0x64]
004c5eb9  MOV EDX,dword ptr [EAX]
004c5ebb  CALL EDX
004c5ebd  MOV dword ptr [EBP + 0xffffff40],EAX
004c5ec3  JMP 0x004c5ecf
004c5ec5  MOV dword ptr [EBP + 0xffffff40],0x0
004c5ecf  MOV EAX,dword ptr [EBP + 0xffffff6c]
004c5ed5  MOV dword ptr [EAX + 0x3c],0x0
004c5edc  MOV ECX,dword ptr [EBP + 0xffffff6c]
004c5ee2  CMP dword ptr [ECX + 0x40],0x0
004c5ee6  JZ 0x004c5f2d
004c5ee8  MOV EDX,dword ptr [EBP + 0xffffff6c]
004c5eee  MOV EAX,dword ptr [EDX + 0x40]
004c5ef1  MOV dword ptr [EBP + -0x70],EAX
004c5ef4  MOV ECX,dword ptr [EBP + -0x70]
004c5ef7  MOV dword ptr [EBP + -0x6c],ECX
004c5efa  CMP dword ptr [EBP + -0x6c],0x0
004c5efe  JZ 0x004c5f16
004c5f00  PUSH 0x1
004c5f02  MOV EDX,dword ptr [EBP + -0x6c]
004c5f05  MOV EAX,dword ptr [EDX]
004c5f07  MOV ECX,dword ptr [EBP + -0x6c]
004c5f0a  MOV EDX,dword ptr [EAX]
004c5f0c  CALL EDX
004c5f0e  MOV dword ptr [EBP + 0xffffff3c],EAX
004c5f14  JMP 0x004c5f20
004c5f16  MOV dword ptr [EBP + 0xffffff3c],0x0
004c5f20  MOV EAX,dword ptr [EBP + 0xffffff6c]
004c5f26  MOV dword ptr [EAX + 0x40],0x0
004c5f2d  MOV word ptr [EBP + -0x10],0x0
004c5f33  JMP 0x004c5f41
004c5f35  MOV CX,word ptr [EBP + -0x10]
004c5f39  ADD CX,0x1
004c5f3d  MOV word ptr [EBP + -0x10],CX
004c5f41  MOVSX EDX,word ptr [EBP + -0x10]
004c5f45  CMP EDX,0x2
004c5f48  JGE 0x004c6013
004c5f4e  MOVSX EAX,word ptr [EBP + -0x10]
004c5f52  MOV ECX,dword ptr [EBP + 0xffffff6c]
004c5f58  CMP dword ptr [ECX + EAX*0x4 + 0x48],0x0
004c5f5d  JZ 0x004c5fae
004c5f5f  MOVSX EDX,word ptr [EBP + -0x10]
004c5f63  MOV EAX,dword ptr [EBP + 0xffffff6c]
004c5f69  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x48]
004c5f6d  MOV dword ptr [EBP + -0x78],ECX
004c5f70  MOV EDX,dword ptr [EBP + -0x78]
004c5f73  MOV dword ptr [EBP + -0x74],EDX
004c5f76  CMP dword ptr [EBP + -0x74],0x0
004c5f7a  JZ 0x004c5f92
004c5f7c  PUSH 0x1
004c5f7e  MOV EAX,dword ptr [EBP + -0x74]
004c5f81  MOV EDX,dword ptr [EAX]
004c5f83  MOV ECX,dword ptr [EBP + -0x74]
004c5f86  MOV EAX,dword ptr [EDX]
004c5f88  CALL EAX
004c5f8a  MOV dword ptr [EBP + 0xffffff38],EAX
004c5f90  JMP 0x004c5f9c
004c5f92  MOV dword ptr [EBP + 0xffffff38],0x0
004c5f9c  MOVSX ECX,word ptr [EBP + -0x10]
004c5fa0  MOV EDX,dword ptr [EBP + 0xffffff6c]
004c5fa6  MOV dword ptr [EDX + ECX*0x4 + 0x48],0x0
004c5fae  MOVSX EAX,word ptr [EBP + -0x10]
004c5fb2  MOV ECX,dword ptr [EBP + 0xffffff6c]
004c5fb8  CMP dword ptr [ECX + EAX*0x4 + 0x50],0x0
004c5fbd  JZ 0x004c600e
004c5fbf  MOVSX EDX,word ptr [EBP + -0x10]
004c5fc3  MOV EAX,dword ptr [EBP + 0xffffff6c]
004c5fc9  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x50]
004c5fcd  MOV dword ptr [EBP + -0x80],ECX
004c5fd0  MOV EDX,dword ptr [EBP + -0x80]
004c5fd3  MOV dword ptr [EBP + -0x7c],EDX
004c5fd6  CMP dword ptr [EBP + -0x7c],0x0
004c5fda  JZ 0x004c5ff2
004c5fdc  PUSH 0x1
004c5fde  MOV EAX,dword ptr [EBP + -0x7c]
004c5fe1  MOV EDX,dword ptr [EAX]
004c5fe3  MOV ECX,dword ptr [EBP + -0x7c]
004c5fe6  MOV EAX,dword ptr [EDX]
004c5fe8  CALL EAX
004c5fea  MOV dword ptr [EBP + 0xffffff34],EAX
004c5ff0  JMP 0x004c5ffc
004c5ff2  MOV dword ptr [EBP + 0xffffff34],0x0
004c5ffc  MOVSX ECX,word ptr [EBP + -0x10]
004c6000  MOV EDX,dword ptr [EBP + 0xffffff6c]
004c6006  MOV dword ptr [EDX + ECX*0x4 + 0x50],0x0
004c600e  JMP 0x004c5f35
004c6013  MOV word ptr [EBP + -0x10],0x0
004c6019  JMP 0x004c6027
004c601b  MOV AX,word ptr [EBP + -0x10]
004c601f  ADD AX,0x1
004c6023  MOV word ptr [EBP + -0x10],AX
004c6027  MOVSX ECX,word ptr [EBP + -0x10]
004c602b  CMP ECX,0x3
004c602e  JGE 0x004c60a7
004c6030  MOVSX EDX,word ptr [EBP + -0x10]
004c6034  MOV EAX,dword ptr [EBP + 0xffffff6c]
004c603a  CMP dword ptr [EAX + EDX*0x4 + 0x58],0x0
004c603f  JZ 0x004c60a2
004c6041  MOVSX ECX,word ptr [EBP + -0x10]
004c6045  MOV EDX,dword ptr [EBP + 0xffffff6c]
004c604b  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x58]
004c604f  MOV dword ptr [EBP + 0xffffff78],EAX
004c6055  MOV ECX,dword ptr [EBP + 0xffffff78]
004c605b  MOV dword ptr [EBP + 0xffffff7c],ECX
004c6061  CMP dword ptr [EBP + 0xffffff7c],0x0
004c6068  JZ 0x004c6086
004c606a  PUSH 0x1
004c606c  MOV EDX,dword ptr [EBP + 0xffffff7c]
004c6072  MOV EAX,dword ptr [EDX]
004c6074  MOV ECX,dword ptr [EBP + 0xffffff7c]
004c607a  MOV EDX,dword ptr [EAX]
004c607c  CALL EDX
004c607e  MOV dword ptr [EBP + 0xffffff30],EAX
004c6084  JMP 0x004c6090
004c6086  MOV dword ptr [EBP + 0xffffff30],0x0
004c6090  MOVSX EAX,word ptr [EBP + -0x10]
004c6094  MOV ECX,dword ptr [EBP + 0xffffff6c]
004c609a  MOV dword ptr [ECX + EAX*0x4 + 0x58],0x0
004c60a2  JMP 0x004c601b
004c60a7  MOV EDX,dword ptr [EBP + 0xffffff6c]
004c60ad  CMP dword ptr [EDX + 0x428],0x0
004c60b4  JZ 0x004c6129
004c60b6  MOV EAX,dword ptr [EBP + 0xffffff6c]
004c60bc  MOV ECX,dword ptr [EAX + 0x428]
004c60c2  MOV dword ptr [EBP + 0xffffff70],ECX
004c60c8  MOV EDX,dword ptr [EBP + 0xffffff70]
004c60ce  MOV dword ptr [EBP + 0xffffff74],EDX
004c60d4  CMP dword ptr [EBP + 0xffffff74],0x0
004c60db  JZ 0x004c610f
004c60dd  MOV ECX,dword ptr [EBP + 0xffffff74]
004c60e3  CALL 0x004c5740
004c60e8  MOV EAX,0x1
004c60ed  AND EAX,0x1
004c60f0  JZ 0x004c6101
004c60f2  MOV ECX,dword ptr [EBP + 0xffffff74]
004c60f8  PUSH ECX
004c60f9  CALL 0x00686cae
004c60fe  ADD ESP,0x4
004c6101  MOV EDX,dword ptr [EBP + 0xffffff74]
004c6107  MOV dword ptr [EBP + 0xffffff2c],EDX
004c610d  JMP 0x004c6119
004c610f  MOV dword ptr [EBP + 0xffffff2c],0x0
004c6119  MOV EAX,dword ptr [EBP + 0xffffff6c]
004c611f  MOV dword ptr [EAX + 0x428],0x0
004c6129  MOV dword ptr [EBP + -0x4],0xffffffff
004c6130  MOV ECX,dword ptr [EBP + 0xffffff6c]
004c6136  CALL 0x005e9e40
004c613b  MOV ECX,dword ptr [EBP + -0xc]
004c613e  MOV dword ptr FS:[0x0],ECX
004c6145  POP ECX
004c6146  MOV ESP,EBP
004c6148  POP EBP
004c6149  RET
