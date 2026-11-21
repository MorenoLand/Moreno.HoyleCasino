; FUN_0044e970  0044e970
0044e970  PUSH EBP
0044e971  MOV EBP,ESP
0044e973  SUB ESP,0x88
0044e979  MOV dword ptr [EBP + 0xffffff78],ECX
0044e97f  MOV dword ptr [EBP + -0x28],0x8
0044e986  MOV dword ptr [EBP + -0x24],0xa
0044e98d  MOV dword ptr [EBP + -0x20],0x2
0044e994  MOV dword ptr [EBP + -0x1c],0x1
0044e99b  MOV dword ptr [EBP + -0x18],0x5
0044e9a2  MOV dword ptr [EBP + -0x14],0x5
0044e9a9  MOV dword ptr [EBP + -0x10],0x8
0044e9b0  MOV dword ptr [EBP + -0xc],0x4
0044e9b7  MOV dword ptr [EBP + -0x8],0x6
0044e9be  MOV dword ptr [EBP + -0x4],0xa
0044e9c5  MOV dword ptr [EBP + -0x78],0x4
0044e9cc  MOV dword ptr [EBP + -0x74],0xa
0044e9d3  MOV dword ptr [EBP + -0x70],0x8
0044e9da  MOV dword ptr [EBP + -0x6c],0x1
0044e9e1  MOV dword ptr [EBP + -0x68],0x5
0044e9e8  MOV dword ptr [EBP + -0x64],0xa
0044e9ef  MOV dword ptr [EBP + -0x60],0xa
0044e9f6  MOV dword ptr [EBP + -0x5c],0x6
0044e9fd  MOV dword ptr [EBP + -0x58],0xa
0044ea04  MOV dword ptr [EBP + -0x54],0xa
0044ea0b  MOV dword ptr [EBP + -0x50],0x8
0044ea12  MOV dword ptr [EBP + -0x4c],0xa
0044ea19  MOV dword ptr [EBP + -0x48],0x5
0044ea20  MOV dword ptr [EBP + -0x44],0x5
0044ea27  MOV dword ptr [EBP + -0x40],0x5
0044ea2e  MOV dword ptr [EBP + -0x3c],0x2
0044ea35  MOV dword ptr [EBP + -0x38],0x8
0044ea3c  MOV dword ptr [EBP + -0x34],0x4
0044ea43  MOV dword ptr [EBP + -0x30],0x4
0044ea4a  MOV dword ptr [EBP + -0x2c],0xa
0044ea51  MOV EAX,dword ptr [EBP + 0x8]
0044ea54  PUSH EAX
0044ea55  CALL 0x005dcb00
0044ea5a  ADD ESP,0x4
0044ea5d  MOV dword ptr [EBP + -0x80],EAX
0044ea60  MOV ECX,dword ptr [EBP + -0x80]
0044ea63  MOV EDX,dword ptr [ECX + 0x8]
0044ea66  MOV dword ptr [EBP + 0xffffff7c],EDX
0044ea6c  MOV EAX,dword ptr [EBP + 0xffffff7c]
0044ea72  PUSH EAX
0044ea73  MOV ECX,dword ptr [0x0162ee84]
0044ea79  MOV EDX,dword ptr [ECX]
0044ea7b  MOV ECX,dword ptr [0x0162ee84]
0044ea81  MOV EAX,dword ptr [EDX + 0x170]
0044ea87  CALL EAX
0044ea89  MOV dword ptr [EBP + -0x7c],EAX
0044ea8c  MOV ECX,dword ptr [0x00790734]
0044ea92  CALL 0x005da7b0
0044ea97  MOVZX ECX,AL
0044ea9a  TEST ECX,ECX
0044ea9c  JZ 0x0044eadc
0044ea9e  MOV EDX,dword ptr [EBP + 0x8]
0044eaa1  PUSH EDX
0044eaa2  MOV ECX,dword ptr [EBP + 0xffffff78]
0044eaa8  CALL 0x0044eca0
0044eaad  MOVZX EAX,AL
0044eab0  TEST EAX,EAX
0044eab2  JZ 0x0044eabd
0044eab4  MOV ECX,dword ptr [EBP + -0x7c]
0044eab7  MOV EAX,dword ptr [EBP + ECX*0x4 + -0x78]
0044eabb  JMP 0x0044eae3
0044eabd  MOV EDX,dword ptr [EBP + 0x8]
0044eac0  PUSH EDX
0044eac1  MOV ECX,dword ptr [EBP + 0xffffff78]
0044eac7  CALL 0x0044ed20
0044eacc  MOVZX EAX,AL
0044eacf  TEST EAX,EAX
0044ead1  JZ 0x0044eadc
0044ead3  MOV ECX,dword ptr [EBP + -0x7c]
0044ead6  MOV EAX,dword ptr [EBP + ECX*0x4 + -0x50]
0044eada  JMP 0x0044eae3
0044eadc  MOV EDX,dword ptr [EBP + -0x7c]
0044eadf  MOV EAX,dword ptr [EBP + EDX*0x4 + -0x28]
0044eae3  MOV ESP,EBP
0044eae5  POP EBP
0044eae6  RET 0x4
