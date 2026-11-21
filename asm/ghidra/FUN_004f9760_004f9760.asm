; FUN_004f9760  004f9760
004f9760  PUSH EBP
004f9761  MOV EBP,ESP
004f9763  SUB ESP,0x6c
004f9766  MOV dword ptr [EBP + -0x64],ECX
004f9769  MOV EAX,dword ptr [EBP + -0x64]
004f976c  CMP dword ptr [EAX + 0x30],0x0
004f9770  JZ 0x004f9791
004f9772  MOV ECX,dword ptr [EBP + -0x64]
004f9775  MOV EDX,dword ptr [ECX + 0x30]
004f9778  MOV dword ptr [EBP + -0x4],EDX
004f977b  MOV EAX,dword ptr [EBP + -0x4]
004f977e  PUSH EAX
004f977f  CALL 0x00686cae
004f9784  ADD ESP,0x4
004f9787  MOV ECX,dword ptr [EBP + -0x64]
004f978a  MOV dword ptr [ECX + 0x30],0x0
004f9791  MOV EDX,dword ptr [EBP + -0x64]
004f9794  CMP dword ptr [EDX + 0x34],0x0
004f9798  JZ 0x004f97b9
004f979a  MOV EAX,dword ptr [EBP + -0x64]
004f979d  MOV ECX,dword ptr [EAX + 0x34]
004f97a0  MOV dword ptr [EBP + -0x8],ECX
004f97a3  MOV EDX,dword ptr [EBP + -0x8]
004f97a6  PUSH EDX
004f97a7  CALL 0x00686cae
004f97ac  ADD ESP,0x4
004f97af  MOV EAX,dword ptr [EBP + -0x64]
004f97b2  MOV dword ptr [EAX + 0x34],0x0
004f97b9  MOV ECX,dword ptr [EBP + -0x64]
004f97bc  CMP dword ptr [ECX + 0x38],0x0
004f97c0  JZ 0x004f97e1
004f97c2  MOV EDX,dword ptr [EBP + -0x64]
004f97c5  MOV EAX,dword ptr [EDX + 0x38]
004f97c8  MOV dword ptr [EBP + -0xc],EAX
004f97cb  MOV ECX,dword ptr [EBP + -0xc]
004f97ce  PUSH ECX
004f97cf  CALL 0x00686cae
004f97d4  ADD ESP,0x4
004f97d7  MOV EDX,dword ptr [EBP + -0x64]
004f97da  MOV dword ptr [EDX + 0x38],0x0
004f97e1  MOV EAX,dword ptr [EBP + -0x64]
004f97e4  CMP dword ptr [EAX + 0x3c],0x0
004f97e8  JZ 0x004f9809
004f97ea  MOV ECX,dword ptr [EBP + -0x64]
004f97ed  MOV EDX,dword ptr [ECX + 0x3c]
004f97f0  MOV dword ptr [EBP + -0x10],EDX
004f97f3  MOV EAX,dword ptr [EBP + -0x10]
004f97f6  PUSH EAX
004f97f7  CALL 0x00686cae
004f97fc  ADD ESP,0x4
004f97ff  MOV ECX,dword ptr [EBP + -0x64]
004f9802  MOV dword ptr [ECX + 0x3c],0x0
004f9809  MOV EDX,dword ptr [EBP + -0x64]
004f980c  CMP dword ptr [EDX + 0x40],0x0
004f9810  JZ 0x004f9831
004f9812  MOV EAX,dword ptr [EBP + -0x64]
004f9815  MOV ECX,dword ptr [EAX + 0x40]
004f9818  MOV dword ptr [EBP + -0x14],ECX
004f981b  MOV EDX,dword ptr [EBP + -0x14]
004f981e  PUSH EDX
004f981f  CALL 0x00686cae
004f9824  ADD ESP,0x4
004f9827  MOV EAX,dword ptr [EBP + -0x64]
004f982a  MOV dword ptr [EAX + 0x40],0x0
004f9831  MOV ECX,dword ptr [EBP + -0x64]
004f9834  CMP dword ptr [ECX + 0x44],0x0
004f9838  JZ 0x004f9859
004f983a  MOV EDX,dword ptr [EBP + -0x64]
004f983d  MOV EAX,dword ptr [EDX + 0x44]
004f9840  MOV dword ptr [EBP + -0x18],EAX
004f9843  MOV ECX,dword ptr [EBP + -0x18]
004f9846  PUSH ECX
004f9847  CALL 0x00686cae
004f984c  ADD ESP,0x4
004f984f  MOV EDX,dword ptr [EBP + -0x64]
004f9852  MOV dword ptr [EDX + 0x44],0x0
004f9859  MOV EAX,dword ptr [EBP + -0x64]
004f985c  CMP dword ptr [EAX + 0x48],0x0
004f9860  JZ 0x004f9881
004f9862  MOV ECX,dword ptr [EBP + -0x64]
004f9865  MOV EDX,dword ptr [ECX + 0x48]
004f9868  MOV dword ptr [EBP + -0x1c],EDX
004f986b  MOV EAX,dword ptr [EBP + -0x1c]
004f986e  PUSH EAX
004f986f  CALL 0x00686cae
004f9874  ADD ESP,0x4
004f9877  MOV ECX,dword ptr [EBP + -0x64]
004f987a  MOV dword ptr [ECX + 0x48],0x0
004f9881  MOV EDX,dword ptr [EBP + -0x64]
004f9884  CMP dword ptr [EDX + 0x68],0x0
004f9888  JZ 0x004f98a9
004f988a  MOV EAX,dword ptr [EBP + -0x64]
004f988d  MOV ECX,dword ptr [EAX + 0x68]
004f9890  MOV dword ptr [EBP + -0x20],ECX
004f9893  MOV EDX,dword ptr [EBP + -0x20]
004f9896  PUSH EDX
004f9897  CALL 0x00686cae
004f989c  ADD ESP,0x4
004f989f  MOV EAX,dword ptr [EBP + -0x64]
004f98a2  MOV dword ptr [EAX + 0x68],0x0
004f98a9  MOV ECX,dword ptr [EBP + -0x64]
004f98ac  CMP dword ptr [ECX + 0x6c],0x0
004f98b0  JZ 0x004f98d1
004f98b2  MOV EDX,dword ptr [EBP + -0x64]
004f98b5  MOV EAX,dword ptr [EDX + 0x6c]
004f98b8  MOV dword ptr [EBP + -0x24],EAX
004f98bb  MOV ECX,dword ptr [EBP + -0x24]
004f98be  PUSH ECX
004f98bf  CALL 0x00686cae
004f98c4  ADD ESP,0x4
004f98c7  MOV EDX,dword ptr [EBP + -0x64]
004f98ca  MOV dword ptr [EDX + 0x6c],0x0
004f98d1  MOV EAX,dword ptr [EBP + -0x64]
004f98d4  CMP dword ptr [EAX + 0x70],0x0
004f98d8  JZ 0x004f98f9
004f98da  MOV ECX,dword ptr [EBP + -0x64]
004f98dd  MOV EDX,dword ptr [ECX + 0x70]
004f98e0  MOV dword ptr [EBP + -0x28],EDX
004f98e3  MOV EAX,dword ptr [EBP + -0x28]
004f98e6  PUSH EAX
004f98e7  CALL 0x00686cae
004f98ec  ADD ESP,0x4
004f98ef  MOV ECX,dword ptr [EBP + -0x64]
004f98f2  MOV dword ptr [ECX + 0x70],0x0
004f98f9  MOV EDX,dword ptr [EBP + -0x64]
004f98fc  CMP dword ptr [EDX + 0x74],0x0
004f9900  JZ 0x004f9921
004f9902  MOV EAX,dword ptr [EBP + -0x64]
004f9905  MOV ECX,dword ptr [EAX + 0x74]
004f9908  MOV dword ptr [EBP + -0x2c],ECX
004f990b  MOV EDX,dword ptr [EBP + -0x2c]
004f990e  PUSH EDX
004f990f  CALL 0x00686cae
004f9914  ADD ESP,0x4
004f9917  MOV EAX,dword ptr [EBP + -0x64]
004f991a  MOV dword ptr [EAX + 0x74],0x0
004f9921  MOV ECX,dword ptr [EBP + -0x64]
004f9924  CMP dword ptr [ECX + 0x78],0x0
004f9928  JZ 0x004f9949
004f992a  MOV EDX,dword ptr [EBP + -0x64]
004f992d  MOV EAX,dword ptr [EDX + 0x78]
004f9930  MOV dword ptr [EBP + -0x30],EAX
004f9933  MOV ECX,dword ptr [EBP + -0x30]
004f9936  PUSH ECX
004f9937  CALL 0x00686cae
004f993c  ADD ESP,0x4
004f993f  MOV EDX,dword ptr [EBP + -0x64]
004f9942  MOV dword ptr [EDX + 0x78],0x0
004f9949  MOV EAX,dword ptr [EBP + -0x64]
004f994c  CMP dword ptr [EAX + 0x7c],0x0
004f9950  JZ 0x004f9987
004f9952  MOV ECX,dword ptr [EBP + -0x64]
004f9955  MOV EDX,dword ptr [ECX + 0x7c]
004f9958  MOV dword ptr [EBP + -0x38],EDX
004f995b  MOV EAX,dword ptr [EBP + -0x38]
004f995e  MOV dword ptr [EBP + -0x34],EAX
004f9961  CMP dword ptr [EBP + -0x34],0x0
004f9965  JZ 0x004f9976
004f9967  PUSH 0x3
004f9969  MOV ECX,dword ptr [EBP + -0x34]
004f996c  CALL 0x004f9b20
004f9971  MOV dword ptr [EBP + -0x68],EAX
004f9974  JMP 0x004f997d
004f9976  MOV dword ptr [EBP + -0x68],0x0
004f997d  MOV ECX,dword ptr [EBP + -0x64]
004f9980  MOV dword ptr [ECX + 0x7c],0x0
004f9987  MOV EDX,dword ptr [EBP + -0x64]
004f998a  CMP dword ptr [EDX + 0x80],0x0
004f9991  JZ 0x004f99ce
004f9993  MOV EAX,dword ptr [EBP + -0x64]
004f9996  MOV ECX,dword ptr [EAX + 0x80]
004f999c  MOV dword ptr [EBP + -0x40],ECX
004f999f  MOV EDX,dword ptr [EBP + -0x40]
004f99a2  MOV dword ptr [EBP + -0x3c],EDX
004f99a5  CMP dword ptr [EBP + -0x3c],0x0
004f99a9  JZ 0x004f99ba
004f99ab  PUSH 0x3
004f99ad  MOV ECX,dword ptr [EBP + -0x3c]
004f99b0  CALL 0x004f9b20
004f99b5  MOV dword ptr [EBP + -0x6c],EAX
004f99b8  JMP 0x004f99c1
004f99ba  MOV dword ptr [EBP + -0x6c],0x0
004f99c1  MOV EAX,dword ptr [EBP + -0x64]
004f99c4  MOV dword ptr [EAX + 0x80],0x0
004f99ce  MOV ECX,dword ptr [EBP + -0x64]
004f99d1  CMP dword ptr [ECX + 0x84],0x0
004f99d8  JZ 0x004f99ff
004f99da  MOV EDX,dword ptr [EBP + -0x64]
004f99dd  MOV EAX,dword ptr [EDX + 0x84]
004f99e3  MOV dword ptr [EBP + -0x44],EAX
004f99e6  MOV ECX,dword ptr [EBP + -0x44]
004f99e9  PUSH ECX
004f99ea  CALL 0x00686cae
004f99ef  ADD ESP,0x4
004f99f2  MOV EDX,dword ptr [EBP + -0x64]
004f99f5  MOV dword ptr [EDX + 0x84],0x0
004f99ff  MOV EAX,dword ptr [EBP + -0x64]
004f9a02  CMP dword ptr [EAX + 0x4c],0x0
004f9a06  JZ 0x004f9a27
004f9a08  MOV ECX,dword ptr [EBP + -0x64]
004f9a0b  MOV EDX,dword ptr [ECX + 0x4c]
004f9a0e  MOV dword ptr [EBP + -0x48],EDX
004f9a11  MOV EAX,dword ptr [EBP + -0x48]
004f9a14  PUSH EAX
004f9a15  CALL 0x00686cae
004f9a1a  ADD ESP,0x4
004f9a1d  MOV ECX,dword ptr [EBP + -0x64]
004f9a20  MOV dword ptr [ECX + 0x4c],0x0
004f9a27  MOV EDX,dword ptr [EBP + -0x64]
004f9a2a  CMP dword ptr [EDX + 0x5c],0x0
004f9a2e  JZ 0x004f9a4f
004f9a30  MOV EAX,dword ptr [EBP + -0x64]
004f9a33  MOV ECX,dword ptr [EAX + 0x5c]
004f9a36  MOV dword ptr [EBP + -0x4c],ECX
004f9a39  MOV EDX,dword ptr [EBP + -0x4c]
004f9a3c  PUSH EDX
004f9a3d  CALL 0x00686cae
004f9a42  ADD ESP,0x4
004f9a45  MOV EAX,dword ptr [EBP + -0x64]
004f9a48  MOV dword ptr [EAX + 0x5c],0x0
004f9a4f  MOV ECX,dword ptr [EBP + -0x64]
004f9a52  CMP dword ptr [ECX + 0x60],0x0
004f9a56  JZ 0x004f9a77
004f9a58  MOV EDX,dword ptr [EBP + -0x64]
004f9a5b  MOV EAX,dword ptr [EDX + 0x60]
004f9a5e  MOV dword ptr [EBP + -0x50],EAX
004f9a61  MOV ECX,dword ptr [EBP + -0x50]
004f9a64  PUSH ECX
004f9a65  CALL 0x00686cae
004f9a6a  ADD ESP,0x4
004f9a6d  MOV EDX,dword ptr [EBP + -0x64]
004f9a70  MOV dword ptr [EDX + 0x60],0x0
004f9a77  MOV EAX,dword ptr [EBP + -0x64]
004f9a7a  CMP dword ptr [EAX + 0x64],0x0
004f9a7e  JZ 0x004f9a9f
004f9a80  MOV ECX,dword ptr [EBP + -0x64]
004f9a83  MOV EDX,dword ptr [ECX + 0x64]
004f9a86  MOV dword ptr [EBP + -0x54],EDX
004f9a89  MOV EAX,dword ptr [EBP + -0x54]
004f9a8c  PUSH EAX
004f9a8d  CALL 0x00686cae
004f9a92  ADD ESP,0x4
004f9a95  MOV ECX,dword ptr [EBP + -0x64]
004f9a98  MOV dword ptr [ECX + 0x64],0x0
004f9a9f  MOV EDX,dword ptr [EBP + -0x64]
004f9aa2  CMP dword ptr [EDX + 0x50],0x0
004f9aa6  JZ 0x004f9ac7
004f9aa8  MOV EAX,dword ptr [EBP + -0x64]
004f9aab  MOV ECX,dword ptr [EAX + 0x50]
004f9aae  MOV dword ptr [EBP + -0x58],ECX
004f9ab1  MOV EDX,dword ptr [EBP + -0x58]
004f9ab4  PUSH EDX
004f9ab5  CALL 0x00686cae
004f9aba  ADD ESP,0x4
004f9abd  MOV EAX,dword ptr [EBP + -0x64]
004f9ac0  MOV dword ptr [EAX + 0x50],0x0
004f9ac7  MOV ECX,dword ptr [EBP + -0x64]
004f9aca  CMP dword ptr [ECX + 0x54],0x0
004f9ace  JZ 0x004f9aef
004f9ad0  MOV EDX,dword ptr [EBP + -0x64]
004f9ad3  MOV EAX,dword ptr [EDX + 0x54]
004f9ad6  MOV dword ptr [EBP + -0x5c],EAX
004f9ad9  MOV ECX,dword ptr [EBP + -0x5c]
004f9adc  PUSH ECX
004f9add  CALL 0x00686cae
004f9ae2  ADD ESP,0x4
004f9ae5  MOV EDX,dword ptr [EBP + -0x64]
004f9ae8  MOV dword ptr [EDX + 0x54],0x0
004f9aef  MOV EAX,dword ptr [EBP + -0x64]
004f9af2  CMP dword ptr [EAX + 0x58],0x0
004f9af6  JZ 0x004f9b17
004f9af8  MOV ECX,dword ptr [EBP + -0x64]
004f9afb  MOV EDX,dword ptr [ECX + 0x58]
004f9afe  MOV dword ptr [EBP + -0x60],EDX
004f9b01  MOV EAX,dword ptr [EBP + -0x60]
004f9b04  PUSH EAX
004f9b05  CALL 0x00686cae
004f9b0a  ADD ESP,0x4
004f9b0d  MOV ECX,dword ptr [EBP + -0x64]
004f9b10  MOV dword ptr [ECX + 0x58],0x0
004f9b17  MOV ESP,EBP
004f9b19  POP EBP
004f9b1a  RET
