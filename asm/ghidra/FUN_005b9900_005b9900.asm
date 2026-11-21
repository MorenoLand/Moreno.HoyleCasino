; FUN_005b9900  005b9900
005b9900  PUSH EBP
005b9901  MOV EBP,ESP
005b9903  SUB ESP,0x54
005b9906  MOV dword ptr [EBP + -0x4c],ECX
005b9909  MOV EAX,dword ptr [EBP + -0x4c]
005b990c  ADD EAX,0x4
005b990f  MOV dword ptr [EBP + -0x2c],EAX
005b9912  MOV ECX,dword ptr [EBP + -0x2c]
005b9915  CMP dword ptr [ECX + 0x4],0x0
005b9919  JNZ 0x005b9924
005b991b  MOV dword ptr [EBP + -0x50],0x0
005b9922  JMP 0x005b9936
005b9924  MOV EDX,dword ptr [EBP + -0x2c]
005b9927  MOV EAX,dword ptr [EBP + -0x2c]
005b992a  MOV ECX,dword ptr [EDX + 0x8]
005b992d  SUB ECX,dword ptr [EAX + 0x4]
005b9930  SAR ECX,0x4
005b9933  MOV dword ptr [EBP + -0x50],ECX
005b9936  MOV EDX,dword ptr [EBP + 0x8]
005b9939  CMP EDX,dword ptr [EBP + -0x50]
005b993c  JL 0x005b9943
005b993e  JMP 0x005b9a9b
005b9943  MOV EAX,dword ptr [EBP + -0x4c]
005b9946  ADD EAX,0x4
005b9949  MOV dword ptr [EBP + -0x30],EAX
005b994c  MOV ECX,dword ptr [EBP + -0x30]
005b994f  CMP dword ptr [ECX + 0x4],0x0
005b9953  JNZ 0x005b995e
005b9955  MOV dword ptr [EBP + -0x54],0x0
005b995c  JMP 0x005b9970
005b995e  MOV EDX,dword ptr [EBP + -0x30]
005b9961  MOV EAX,dword ptr [EBP + -0x30]
005b9964  MOV ECX,dword ptr [EDX + 0x8]
005b9967  SUB ECX,dword ptr [EAX + 0x4]
005b996a  SAR ECX,0x4
005b996d  MOV dword ptr [EBP + -0x54],ECX
005b9970  MOV EDX,dword ptr [EBP + 0x8]
005b9973  CMP EDX,dword ptr [EBP + -0x54]
005b9976  JC 0x005b997e
005b9978  CALL dword ptr [0x006b2274]
005b997e  MOV EAX,dword ptr [EBP + 0x8]
005b9981  SHL EAX,0x4
005b9984  MOV ECX,dword ptr [EBP + -0x30]
005b9987  ADD EAX,dword ptr [ECX + 0x4]
005b998a  MOV dword ptr [EBP + -0xc],EAX
005b998d  MOV EDX,dword ptr [EBP + 0x8]
005b9990  PUSH EDX
005b9991  MOV ECX,dword ptr [EBP + -0x4c]
005b9994  CALL 0x005b9320
005b9999  MOV dword ptr [EBP + -0x18],EAX
005b999c  LEA EAX,[EBP + -0x8]
005b999f  PUSH EAX
005b99a0  MOV ECX,dword ptr [EBP + -0xc]
005b99a3  CALL 0x005b9fd0
005b99a8  LEA ECX,[EBP + -0x14]
005b99ab  PUSH ECX
005b99ac  MOV ECX,dword ptr [EBP + -0xc]
005b99af  CALL 0x005ba030
005b99b4  JMP 0x005b99d6
005b99b6  MOV EDX,dword ptr [EBP + -0x8]
005b99b9  MOV EAX,dword ptr [EBP + -0x4]
005b99bc  MOV dword ptr [EBP + -0x40],EDX
005b99bf  MOV dword ptr [EBP + -0x3c],EAX
005b99c2  LEA ECX,[EBP + -0x8]
005b99c5  CALL 0x005ba190
005b99ca  MOV ECX,dword ptr [EBP + -0x40]
005b99cd  MOV dword ptr [EBP + -0x28],ECX
005b99d0  MOV EDX,dword ptr [EBP + -0x3c]
005b99d3  MOV dword ptr [EBP + -0x24],EDX
005b99d6  CMP dword ptr [EBP + -0x8],0x0
005b99da  JZ 0x005b99e4
005b99dc  MOV EAX,dword ptr [EBP + -0x8]
005b99df  CMP EAX,dword ptr [EBP + -0x14]
005b99e2  JZ 0x005b99ea
005b99e4  CALL dword ptr [0x006b2274]
005b99ea  MOV ECX,dword ptr [EBP + -0x4]
005b99ed  XOR EDX,EDX
005b99ef  CMP ECX,dword ptr [EBP + -0x10]
005b99f2  SETZ DL
005b99f5  MOVZX EAX,DL
005b99f8  NEG EAX
005b99fa  SBB EAX,EAX
005b99fc  ADD EAX,0x1
005b99ff  MOVZX ECX,AL
005b9a02  TEST ECX,ECX
005b9a04  JZ 0x005b9a9b
005b9a0a  CMP dword ptr [EBP + -0x8],0x0
005b9a0e  JNZ 0x005b9a16
005b9a10  CALL dword ptr [0x006b2274]
005b9a16  MOV EDX,dword ptr [EBP + -0x8]
005b9a19  MOV EAX,dword ptr [EBP + -0x4]
005b9a1c  CMP EAX,dword ptr [EDX + 0x8]
005b9a1f  JC 0x005b9a27
005b9a21  CALL dword ptr [0x006b2274]
005b9a27  MOV ECX,dword ptr [EBP + -0x4]
005b9a2a  MOV dword ptr [EBP + -0x44],ECX
005b9a2d  MOV EDX,dword ptr [EBP + -0x44]
005b9a30  MOV EAX,dword ptr [EDX]
005b9a32  PUSH EAX
005b9a33  MOV ECX,dword ptr [EBP + -0x18]
005b9a36  CALL 0x005fb2b0
005b9a3b  MOV dword ptr [EBP + -0x1c],EAX
005b9a3e  CMP dword ptr [EBP + -0x1c],0x0
005b9a42  JZ 0x005b9a50
005b9a44  MOV CL,byte ptr [EBP + 0xc]
005b9a47  PUSH ECX
005b9a48  MOV ECX,dword ptr [EBP + -0x1c]
005b9a4b  CALL 0x005f5460
005b9a50  CMP dword ptr [EBP + -0x8],0x0
005b9a54  JNZ 0x005b9a5c
005b9a56  CALL dword ptr [0x006b2274]
005b9a5c  MOV EDX,dword ptr [EBP + -0x8]
005b9a5f  MOV EAX,dword ptr [EBP + -0x4]
005b9a62  CMP EAX,dword ptr [EDX + 0x8]
005b9a65  JC 0x005b9a6d
005b9a67  CALL dword ptr [0x006b2274]
005b9a6d  MOV ECX,dword ptr [EBP + -0x4]
005b9a70  MOV dword ptr [EBP + -0x48],ECX
005b9a73  MOV EDX,dword ptr [EBP + -0x48]
005b9a76  MOV EAX,dword ptr [EDX]
005b9a78  PUSH EAX
005b9a79  MOV ECX,dword ptr [EBP + -0x18]
005b9a7c  CALL 0x005fb550
005b9a81  MOV dword ptr [EBP + -0x20],EAX
005b9a84  CMP dword ptr [EBP + -0x20],0x0
005b9a88  JZ 0x005b9a96
005b9a8a  MOV CL,byte ptr [EBP + 0xc]
005b9a8d  PUSH ECX
005b9a8e  MOV ECX,dword ptr [EBP + -0x20]
005b9a91  CALL 0x005f5460
005b9a96  JMP 0x005b99b6
005b9a9b  MOV ESP,EBP
005b9a9d  POP EBP
005b9a9e  RET 0x8
