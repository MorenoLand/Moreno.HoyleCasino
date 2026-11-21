; FUN_005ee4c0  005ee4c0
005ee4c0  PUSH EBP
005ee4c1  MOV EBP,ESP
005ee4c3  SUB ESP,0x80
005ee4c9  CMP dword ptr [EBP + 0x8],0x7f
005ee4cd  JLE 0x005ee4d8
005ee4cf  CMP dword ptr [EBP + 0x8],0xa0
005ee4d6  JL 0x005ee4e5
005ee4d8  MOV EAX,dword ptr [EBP + 0x8]
005ee4db  JMP 0x005ee5d4
005ee4e5  MOV dword ptr [EBP + -0x80],0xfffe
005ee4ec  MOV dword ptr [EBP + -0x7c],0xfffe
005ee4f3  MOV dword ptr [EBP + -0x78],0x201a
005ee4fa  MOV dword ptr [EBP + -0x74],0x192
005ee501  MOV dword ptr [EBP + -0x70],0x201e
005ee508  MOV dword ptr [EBP + -0x6c],0x2026
005ee50f  MOV dword ptr [EBP + -0x68],0x2020
005ee516  MOV dword ptr [EBP + -0x64],0x2021
005ee51d  MOV dword ptr [EBP + -0x60],0x2c6
005ee524  MOV dword ptr [EBP + -0x5c],0x2030
005ee52b  MOV dword ptr [EBP + -0x58],0x160
005ee532  MOV dword ptr [EBP + -0x54],0x2039
005ee539  MOV dword ptr [EBP + -0x50],0x152
005ee540  MOV dword ptr [EBP + -0x4c],0xfffe
005ee547  MOV dword ptr [EBP + -0x48],0xfffe
005ee54e  MOV dword ptr [EBP + -0x44],0xfffe
005ee555  MOV dword ptr [EBP + -0x40],0xfffe
005ee55c  MOV dword ptr [EBP + -0x3c],0x2018
005ee563  MOV dword ptr [EBP + -0x38],0x2019
005ee56a  MOV dword ptr [EBP + -0x34],0x201c
005ee571  MOV dword ptr [EBP + -0x30],0x201d
005ee578  MOV dword ptr [EBP + -0x2c],0x2022
005ee57f  MOV dword ptr [EBP + -0x28],0x2013
005ee586  MOV dword ptr [EBP + -0x24],0x2014
005ee58d  MOV dword ptr [EBP + -0x20],0x2dc
005ee594  MOV dword ptr [EBP + -0x1c],0x2122
005ee59b  MOV dword ptr [EBP + -0x18],0x161
005ee5a2  MOV dword ptr [EBP + -0x14],0x203a
005ee5a9  MOV dword ptr [EBP + -0x10],0x153
005ee5b0  MOV dword ptr [EBP + -0xc],0xfffe
005ee5b7  MOV dword ptr [EBP + -0x8],0xfffe
005ee5be  MOV dword ptr [EBP + -0x4],0x178
005ee5c5  MOV EAX,dword ptr [EBP + 0x8]
005ee5c8  MOV EAX,dword ptr [EBP + EAX*0x4 + 0xfffffd80]
005ee5cf  JMP 0x005ee5d4
005ee5d4  MOV ESP,EBP
005ee5d6  POP EBP
005ee5d7  RET
