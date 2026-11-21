; FUN_004cf3a0  004cf3a0
004cf3a0  PUSH EBP
004cf3a1  MOV EBP,ESP
004cf3a3  SUB ESP,0x10
004cf3a6  PUSH ESI
004cf3a7  PUSH EDI
004cf3a8  MOV dword ptr [EBP + -0x10],ECX
004cf3ab  MOVSX EAX,word ptr [EBP + 0x8]
004cf3af  TEST EAX,EAX
004cf3b1  JGE 0x004cf3ca
004cf3b3  PUSH 0xcef
004cf3b8  PUSH 0x6bf384
004cf3bd  PUSH 0x6bf888
004cf3c2  CALL 0x005e9f20
004cf3c7  ADD ESP,0xc
004cf3ca  MOVSX ESI,word ptr [EBP + 0x8]
004cf3ce  MOV ECX,dword ptr [0x00791364]
004cf3d4  CALL 0x0047f950
004cf3d9  CMP ESI,EAX
004cf3db  JL 0x004cf3f4
004cf3dd  PUSH 0xcf0
004cf3e2  PUSH 0x6bf384
004cf3e7  PUSH 0x6bf858
004cf3ec  CALL 0x005e9f20
004cf3f1  ADD ESP,0xc
004cf3f4  MOVSX EAX,word ptr [EBP + 0xc]
004cf3f8  TEST EAX,EAX
004cf3fa  JG 0x004cf413
004cf3fc  PUSH 0xcf1
004cf401  PUSH 0x6bf384
004cf406  PUSH 0x6bf7c4
004cf40b  CALL 0x005e9f20
004cf410  ADD ESP,0xc
004cf413  MOVSX EDX,word ptr [EBP + 0xc]
004cf417  CMP EDX,0x6
004cf41a  JLE 0x004cf433
004cf41c  PUSH 0xcf2
004cf421  PUSH 0x6bf384
004cf426  PUSH 0x6bf78c
004cf42b  CALL 0x005e9f20
004cf430  ADD ESP,0xc
004cf433  MOVSX ECX,word ptr [EBP + 0x10]
004cf437  CMP ECX,0x2
004cf43a  JGE 0x004cf453
004cf43c  PUSH 0xcf3
004cf441  PUSH 0x6bf384
004cf446  PUSH 0x6bf778
004cf44b  CALL 0x005e9f20
004cf450  ADD ESP,0xc
004cf453  MOVSX ESI,word ptr [EBP + 0x10]
004cf457  MOV ECX,dword ptr [0x00791364]
004cf45d  CALL 0x0047f950
004cf462  CMP ESI,EAX
004cf464  JLE 0x004cf47d
004cf466  PUSH 0xcf4
004cf46b  PUSH 0x6bf384
004cf470  PUSH 0x6bf740
004cf475  CALL 0x005e9f20
004cf47a  ADD ESP,0xc
004cf47d  MOV ECX,dword ptr [EBP + -0x10]
004cf480  MOV EDX,dword ptr [ECX + 0x428]
004cf486  MOVSX EAX,word ptr [EBP + 0x8]
004cf48a  IMUL EAX,EAX,0x7
004cf48d  LEA ECX,[EDX + EAX*0x1 + 0x150]
004cf494  MOVSX EDX,word ptr [EBP + 0x10]
004cf498  MOV AL,byte ptr [ECX + EDX*0x1 + -0x2]
004cf49c  ADD AL,0x1
004cf49e  MOVSX ECX,word ptr [EBP + 0x10]
004cf4a2  MOVSX EDX,word ptr [EBP + 0x8]
004cf4a6  IMUL EDX,EDX,0x7
004cf4a9  MOV ESI,dword ptr [EBP + -0x10]
004cf4ac  MOV ESI,dword ptr [ESI + 0x428]
004cf4b2  LEA EDX,[ESI + EDX*0x1 + 0x150]
004cf4b9  MOV byte ptr [EDX + ECX*0x1 + -0x2],AL
004cf4bd  MOV EAX,dword ptr [EBP + -0x10]
004cf4c0  MOV ECX,dword ptr [EAX + 0x428]
004cf4c6  MOVSX EDX,word ptr [EBP + 0x8]
004cf4ca  IMUL EDX,EDX,0x2a
004cf4cd  LEA EAX,[ECX + EDX*0x1 + 0x188]
004cf4d4  MOVSX ECX,word ptr [EBP + 0xc]
004cf4d8  SUB ECX,0x1
004cf4db  IMUL ECX,ECX,0x7
004cf4de  ADD EAX,ECX
004cf4e0  MOVSX EDX,word ptr [EBP + 0x10]
004cf4e4  MOV AL,byte ptr [EAX + EDX*0x1 + -0x2]
004cf4e8  ADD AL,0x1
004cf4ea  MOVSX ECX,word ptr [EBP + 0x10]
004cf4ee  MOVSX EDX,word ptr [EBP + 0xc]
004cf4f2  SUB EDX,0x1
004cf4f5  IMUL EDX,EDX,0x7
004cf4f8  MOVSX ESI,word ptr [EBP + 0x8]
004cf4fc  IMUL ESI,ESI,0x2a
004cf4ff  MOV EDI,dword ptr [EBP + -0x10]
004cf502  MOV EDI,dword ptr [EDI + 0x428]
004cf508  LEA ESI,[EDI + ESI*0x1 + 0x188]
004cf50f  ADD ESI,EDX
004cf511  MOV byte ptr [ESI + ECX*0x1 + -0x2],AL
004cf515  MOV EAX,dword ptr [EBP + -0x10]
004cf518  MOV ECX,dword ptr [EAX + 0x428]
004cf51e  MOVSX EDX,word ptr [EBP + 0x8]
004cf522  IMUL EDX,EDX,0x7
004cf525  LEA EAX,[ECX + EDX*0x1 + 0x150]
004cf52c  MOVSX ECX,word ptr [EBP + 0x10]
004cf530  MOVZX EDX,byte ptr [EAX + ECX*0x1 + -0x2]
004cf535  CMP EDX,0x50
004cf538  JNZ 0x004cf6a5
004cf53e  MOVSX EAX,word ptr [EBP + 0x8]
004cf542  IMUL EAX,EAX,0xe
004cf545  MOV ECX,dword ptr [EBP + -0x10]
004cf548  MOV EDX,dword ptr [ECX + 0x428]
004cf54e  ADD EDX,EAX
004cf550  MOVSX EAX,word ptr [EBP + 0x10]
004cf554  MOVZX ECX,word ptr [EDX + EAX*0x2 + -0x4]
004cf559  SHR ECX,0x1
004cf55b  MOVSX EDX,word ptr [EBP + 0x10]
004cf55f  MOVSX EAX,word ptr [EBP + 0x8]
004cf563  IMUL EAX,EAX,0xe
004cf566  MOV ESI,dword ptr [EBP + -0x10]
004cf569  ADD EAX,dword ptr [ESI + 0x428]
004cf56f  MOV word ptr [EAX + EDX*0x2 + -0x4],CX
004cf574  MOV ECX,dword ptr [EBP + -0x10]
004cf577  MOV EDX,dword ptr [ECX + 0x428]
004cf57d  MOVSX EAX,word ptr [EBP + 0x8]
004cf581  IMUL EAX,EAX,0xe
004cf584  LEA ECX,[EDX + EAX*0x1 + 0x70]
004cf588  MOVSX EDX,word ptr [EBP + 0x10]
004cf58c  MOVZX EAX,word ptr [ECX + EDX*0x2 + -0x4]
004cf591  SHR EAX,0x1
004cf593  MOVSX ECX,word ptr [EBP + 0x10]
004cf597  MOVSX EDX,word ptr [EBP + 0x8]
004cf59b  IMUL EDX,EDX,0xe
004cf59e  MOV ESI,dword ptr [EBP + -0x10]
004cf5a1  MOV ESI,dword ptr [ESI + 0x428]
004cf5a7  LEA EDX,[ESI + EDX*0x1 + 0x70]
004cf5ab  MOV word ptr [EDX + ECX*0x2 + -0x4],AX
004cf5b0  MOV EAX,dword ptr [EBP + -0x10]
004cf5b3  MOV ECX,dword ptr [EAX + 0x428]
004cf5b9  MOVSX EDX,word ptr [EBP + 0x8]
004cf5bd  IMUL EDX,EDX,0xe
004cf5c0  LEA EAX,[ECX + EDX*0x1 + 0xe0]
004cf5c7  MOVSX ECX,word ptr [EBP + 0x10]
004cf5cb  MOVZX EDX,word ptr [EAX + ECX*0x2 + -0x4]
004cf5d0  SHR EDX,0x1
004cf5d2  MOVSX EAX,word ptr [EBP + 0x10]
004cf5d6  MOVSX ECX,word ptr [EBP + 0x8]
004cf5da  IMUL ECX,ECX,0xe
004cf5dd  MOV ESI,dword ptr [EBP + -0x10]
004cf5e0  MOV ESI,dword ptr [ESI + 0x428]
004cf5e6  LEA ECX,[ESI + ECX*0x1 + 0xe0]
004cf5ed  MOV word ptr [ECX + EAX*0x2 + -0x4],DX
004cf5f2  MOV EDX,dword ptr [EBP + -0x10]
004cf5f5  MOV EAX,dword ptr [EDX + 0x428]
004cf5fb  MOVSX ECX,word ptr [EBP + 0x8]
004cf5ff  IMUL ECX,ECX,0x7
004cf602  LEA EDX,[EAX + ECX*0x1 + 0x150]
004cf609  MOVSX EAX,word ptr [EBP + 0x10]
004cf60d  MOVZX ECX,byte ptr [EDX + EAX*0x1 + -0x2]
004cf612  SHR ECX,0x1
004cf614  MOVSX EDX,word ptr [EBP + 0x10]
004cf618  MOVSX EAX,word ptr [EBP + 0x8]
004cf61c  IMUL EAX,EAX,0x7
004cf61f  MOV ESI,dword ptr [EBP + -0x10]
004cf622  MOV ESI,dword ptr [ESI + 0x428]
004cf628  LEA EAX,[ESI + EAX*0x1 + 0x150]
004cf62f  MOV byte ptr [EAX + EDX*0x1 + -0x2],CL
004cf633  MOV word ptr [EBP + -0x4],0x0
004cf639  JMP 0x004cf647
004cf63b  MOV CX,word ptr [EBP + -0x4]
004cf63f  ADD CX,0x1
004cf643  MOV word ptr [EBP + -0x4],CX
004cf647  MOVSX EDX,word ptr [EBP + -0x4]
004cf64b  CMP EDX,0x6
004cf64e  JGE 0x004cf6a5
004cf650  MOV EAX,dword ptr [EBP + -0x10]
004cf653  MOV ECX,dword ptr [EAX + 0x428]
004cf659  MOVSX EDX,word ptr [EBP + 0x8]
004cf65d  IMUL EDX,EDX,0x2a
004cf660  LEA EAX,[ECX + EDX*0x1 + 0x188]
004cf667  MOVSX ECX,word ptr [EBP + -0x4]
004cf66b  IMUL ECX,ECX,0x7
004cf66e  ADD EAX,ECX
004cf670  MOVSX EDX,word ptr [EBP + 0x10]
004cf674  MOVZX EAX,byte ptr [EAX + EDX*0x1 + -0x2]
004cf679  SHR EAX,0x1
004cf67b  MOVSX ECX,word ptr [EBP + 0x10]
004cf67f  MOVSX EDX,word ptr [EBP + -0x4]
004cf683  IMUL EDX,EDX,0x7
004cf686  MOVSX ESI,word ptr [EBP + 0x8]
004cf68a  IMUL ESI,ESI,0x2a
004cf68d  MOV EDI,dword ptr [EBP + -0x10]
004cf690  MOV EDI,dword ptr [EDI + 0x428]
004cf696  LEA ESI,[EDI + ESI*0x1 + 0x188]
004cf69d  ADD ESI,EDX
004cf69f  MOV byte ptr [ESI + ECX*0x1 + -0x2],AL
004cf6a3  JMP 0x004cf63b
004cf6a5  MOVSX EAX,word ptr [EBP + 0x10]
004cf6a9  CMP EAX,0x2
004cf6ac  JLE 0x004cf8da
004cf6b2  MOV ECX,dword ptr [EBP + -0x10]
004cf6b5  MOV EDX,dword ptr [ECX + 0x428]
004cf6bb  MOVSX EAX,word ptr [EBP + 0x8]
004cf6bf  IMUL EAX,EAX,0x7
004cf6c2  LEA ECX,[EDX + EAX*0x1 + 0x150]
004cf6c9  MOVSX EDX,word ptr [EBP + 0x10]
004cf6cd  MOV AL,byte ptr [ECX + EDX*0x1 + -0x3]
004cf6d1  ADD AL,0x1
004cf6d3  MOVSX ECX,word ptr [EBP + 0x10]
004cf6d7  MOVSX EDX,word ptr [EBP + 0x8]
004cf6db  IMUL EDX,EDX,0x7
004cf6de  MOV ESI,dword ptr [EBP + -0x10]
004cf6e1  MOV ESI,dword ptr [ESI + 0x428]
004cf6e7  LEA EDX,[ESI + EDX*0x1 + 0x150]
004cf6ee  MOV byte ptr [EDX + ECX*0x1 + -0x3],AL
004cf6f2  MOV EAX,dword ptr [EBP + -0x10]
004cf6f5  MOV ECX,dword ptr [EAX + 0x428]
004cf6fb  MOVSX EDX,word ptr [EBP + 0x8]
004cf6ff  IMUL EDX,EDX,0x2a
004cf702  LEA EAX,[ECX + EDX*0x1 + 0x188]
004cf709  MOVSX ECX,word ptr [EBP + 0xc]
004cf70d  SUB ECX,0x1
004cf710  IMUL ECX,ECX,0x7
004cf713  ADD EAX,ECX
004cf715  MOVSX EDX,word ptr [EBP + 0x10]
004cf719  MOV AL,byte ptr [EAX + EDX*0x1 + -0x3]
004cf71d  ADD AL,0x1
004cf71f  MOVSX ECX,word ptr [EBP + 0x10]
004cf723  MOVSX EDX,word ptr [EBP + 0xc]
004cf727  SUB EDX,0x1
004cf72a  IMUL EDX,EDX,0x7
004cf72d  MOVSX ESI,word ptr [EBP + 0x8]
004cf731  IMUL ESI,ESI,0x2a
004cf734  MOV EDI,dword ptr [EBP + -0x10]
004cf737  MOV EDI,dword ptr [EDI + 0x428]
004cf73d  LEA ESI,[EDI + ESI*0x1 + 0x188]
004cf744  ADD ESI,EDX
004cf746  MOV byte ptr [ESI + ECX*0x1 + -0x3],AL
004cf74a  MOV EAX,dword ptr [EBP + -0x10]
004cf74d  MOV ECX,dword ptr [EAX + 0x428]
004cf753  MOVSX EDX,word ptr [EBP + 0x8]
004cf757  IMUL EDX,EDX,0x7
004cf75a  LEA EAX,[ECX + EDX*0x1 + 0x150]
004cf761  MOVSX ECX,word ptr [EBP + 0x10]
004cf765  MOVZX EDX,byte ptr [EAX + ECX*0x1 + -0x3]
004cf76a  CMP EDX,0x50
004cf76d  JNZ 0x004cf8da
004cf773  MOVSX EAX,word ptr [EBP + 0x8]
004cf777  IMUL EAX,EAX,0xe
004cf77a  MOV ECX,dword ptr [EBP + -0x10]
004cf77d  MOV EDX,dword ptr [ECX + 0x428]
004cf783  ADD EDX,EAX
004cf785  MOVSX EAX,word ptr [EBP + 0x10]
004cf789  MOVZX ECX,word ptr [EDX + EAX*0x2 + -0x6]
004cf78e  SHR ECX,0x1
004cf790  MOVSX EDX,word ptr [EBP + 0x10]
004cf794  MOVSX EAX,word ptr [EBP + 0x8]
004cf798  IMUL EAX,EAX,0xe
004cf79b  MOV ESI,dword ptr [EBP + -0x10]
004cf79e  ADD EAX,dword ptr [ESI + 0x428]
004cf7a4  MOV word ptr [EAX + EDX*0x2 + -0x6],CX
004cf7a9  MOV ECX,dword ptr [EBP + -0x10]
004cf7ac  MOV EDX,dword ptr [ECX + 0x428]
004cf7b2  MOVSX EAX,word ptr [EBP + 0x8]
004cf7b6  IMUL EAX,EAX,0xe
004cf7b9  LEA ECX,[EDX + EAX*0x1 + 0x70]
004cf7bd  MOVSX EDX,word ptr [EBP + 0x10]
004cf7c1  MOVZX EAX,word ptr [ECX + EDX*0x2 + -0x6]
004cf7c6  SHR EAX,0x1
004cf7c8  MOVSX ECX,word ptr [EBP + 0x10]
004cf7cc  MOVSX EDX,word ptr [EBP + 0x8]
004cf7d0  IMUL EDX,EDX,0xe
004cf7d3  MOV ESI,dword ptr [EBP + -0x10]
004cf7d6  MOV ESI,dword ptr [ESI + 0x428]
004cf7dc  LEA EDX,[ESI + EDX*0x1 + 0x70]
004cf7e0  MOV word ptr [EDX + ECX*0x2 + -0x6],AX
004cf7e5  MOV EAX,dword ptr [EBP + -0x10]
004cf7e8  MOV ECX,dword ptr [EAX + 0x428]
004cf7ee  MOVSX EDX,word ptr [EBP + 0x8]
004cf7f2  IMUL EDX,EDX,0xe
004cf7f5  LEA EAX,[ECX + EDX*0x1 + 0xe0]
004cf7fc  MOVSX ECX,word ptr [EBP + 0x10]
004cf800  MOVZX EDX,word ptr [EAX + ECX*0x2 + -0x6]
004cf805  SHR EDX,0x1
004cf807  MOVSX EAX,word ptr [EBP + 0x10]
004cf80b  MOVSX ECX,word ptr [EBP + 0x8]
004cf80f  IMUL ECX,ECX,0xe
004cf812  MOV ESI,dword ptr [EBP + -0x10]
004cf815  MOV ESI,dword ptr [ESI + 0x428]
004cf81b  LEA ECX,[ESI + ECX*0x1 + 0xe0]
004cf822  MOV word ptr [ECX + EAX*0x2 + -0x6],DX
004cf827  MOV EDX,dword ptr [EBP + -0x10]
004cf82a  MOV EAX,dword ptr [EDX + 0x428]
004cf830  MOVSX ECX,word ptr [EBP + 0x8]
004cf834  IMUL ECX,ECX,0x7
004cf837  LEA EDX,[EAX + ECX*0x1 + 0x150]
004cf83e  MOVSX EAX,word ptr [EBP + 0x10]
004cf842  MOVZX ECX,byte ptr [EDX + EAX*0x1 + -0x3]
004cf847  SHR ECX,0x1
004cf849  MOVSX EDX,word ptr [EBP + 0x10]
004cf84d  MOVSX EAX,word ptr [EBP + 0x8]
004cf851  IMUL EAX,EAX,0x7
004cf854  MOV ESI,dword ptr [EBP + -0x10]
004cf857  MOV ESI,dword ptr [ESI + 0x428]
004cf85d  LEA EAX,[ESI + EAX*0x1 + 0x150]
004cf864  MOV byte ptr [EAX + EDX*0x1 + -0x3],CL
004cf868  MOV word ptr [EBP + -0x8],0x0
004cf86e  JMP 0x004cf87c
004cf870  MOV CX,word ptr [EBP + -0x8]
004cf874  ADD CX,0x1
004cf878  MOV word ptr [EBP + -0x8],CX
004cf87c  MOVSX EDX,word ptr [EBP + -0x8]
004cf880  CMP EDX,0x6
004cf883  JGE 0x004cf8da
004cf885  MOV EAX,dword ptr [EBP + -0x10]
004cf888  MOV ECX,dword ptr [EAX + 0x428]
004cf88e  MOVSX EDX,word ptr [EBP + 0x8]
004cf892  IMUL EDX,EDX,0x2a
004cf895  LEA EAX,[ECX + EDX*0x1 + 0x188]
004cf89c  MOVSX ECX,word ptr [EBP + -0x8]
004cf8a0  IMUL ECX,ECX,0x7
004cf8a3  ADD EAX,ECX
004cf8a5  MOVSX EDX,word ptr [EBP + 0x10]
004cf8a9  MOVZX EAX,byte ptr [EAX + EDX*0x1 + -0x3]
004cf8ae  SHR EAX,0x1
004cf8b0  MOVSX ECX,word ptr [EBP + 0x10]
004cf8b4  MOVSX EDX,word ptr [EBP + -0x8]
004cf8b8  IMUL EDX,EDX,0x7
004cf8bb  MOVSX ESI,word ptr [EBP + 0x8]
004cf8bf  IMUL ESI,ESI,0x2a
004cf8c2  MOV EDI,dword ptr [EBP + -0x10]
004cf8c5  MOV EDI,dword ptr [EDI + 0x428]
004cf8cb  LEA ESI,[EDI + ESI*0x1 + 0x188]
004cf8d2  ADD ESI,EDX
004cf8d4  MOV byte ptr [ESI + ECX*0x1 + -0x3],AL
004cf8d8  JMP 0x004cf870
004cf8da  MOVSX ESI,word ptr [EBP + 0x10]
004cf8de  MOV ECX,dword ptr [0x00791364]
004cf8e4  CALL 0x0047f950
004cf8e9  CMP ESI,EAX
004cf8eb  JGE 0x004cfb1b
004cf8f1  MOV EAX,dword ptr [EBP + -0x10]
004cf8f4  MOV ECX,dword ptr [EAX + 0x428]
004cf8fa  MOVSX EDX,word ptr [EBP + 0x8]
004cf8fe  IMUL EDX,EDX,0x7
004cf901  LEA EAX,[ECX + EDX*0x1 + 0x150]
004cf908  MOVSX ECX,word ptr [EBP + 0x10]
004cf90c  MOV DL,byte ptr [EAX + ECX*0x1 + -0x1]
004cf910  ADD DL,0x1
004cf913  MOVSX EAX,word ptr [EBP + 0x10]
004cf917  MOVSX ECX,word ptr [EBP + 0x8]
004cf91b  IMUL ECX,ECX,0x7
004cf91e  MOV ESI,dword ptr [EBP + -0x10]
004cf921  MOV ESI,dword ptr [ESI + 0x428]
004cf927  LEA ECX,[ESI + ECX*0x1 + 0x150]
004cf92e  MOV byte ptr [ECX + EAX*0x1 + -0x1],DL
004cf932  MOV EDX,dword ptr [EBP + -0x10]
004cf935  MOV EAX,dword ptr [EDX + 0x428]
004cf93b  MOVSX ECX,word ptr [EBP + 0x8]
004cf93f  IMUL ECX,ECX,0x2a
004cf942  LEA EDX,[EAX + ECX*0x1 + 0x188]
004cf949  MOVSX EAX,word ptr [EBP + 0xc]
004cf94d  SUB EAX,0x1
004cf950  IMUL EAX,EAX,0x7
004cf953  ADD EDX,EAX
004cf955  MOVSX ECX,word ptr [EBP + 0x10]
004cf959  MOV DL,byte ptr [EDX + ECX*0x1 + -0x1]
004cf95d  ADD DL,0x1
004cf960  MOVSX EAX,word ptr [EBP + 0x10]
004cf964  MOVSX ECX,word ptr [EBP + 0xc]
004cf968  SUB ECX,0x1
004cf96b  IMUL ECX,ECX,0x7
004cf96e  MOVSX ESI,word ptr [EBP + 0x8]
004cf972  IMUL ESI,ESI,0x2a
004cf975  MOV EDI,dword ptr [EBP + -0x10]
004cf978  MOV EDI,dword ptr [EDI + 0x428]
004cf97e  LEA ESI,[EDI + ESI*0x1 + 0x188]
004cf985  ADD ESI,ECX
004cf987  MOV byte ptr [ESI + EAX*0x1 + -0x1],DL
004cf98b  MOV EDX,dword ptr [EBP + -0x10]
004cf98e  MOV EAX,dword ptr [EDX + 0x428]
004cf994  MOVSX ECX,word ptr [EBP + 0x8]
004cf998  IMUL ECX,ECX,0x7
004cf99b  LEA EDX,[EAX + ECX*0x1 + 0x150]
004cf9a2  MOVSX EAX,word ptr [EBP + 0x10]
004cf9a6  MOVZX ECX,byte ptr [EDX + EAX*0x1 + -0x1]
004cf9ab  CMP ECX,0x50
004cf9ae  JNZ 0x004cfb1b
004cf9b4  MOVSX EDX,word ptr [EBP + 0x8]
004cf9b8  IMUL EDX,EDX,0xe
004cf9bb  MOV EAX,dword ptr [EBP + -0x10]
004cf9be  MOV ECX,dword ptr [EAX + 0x428]
004cf9c4  ADD ECX,EDX
004cf9c6  MOVSX EDX,word ptr [EBP + 0x10]
004cf9ca  MOVZX EAX,word ptr [ECX + EDX*0x2 + -0x2]
004cf9cf  SHR EAX,0x1
004cf9d1  MOVSX ECX,word ptr [EBP + 0x10]
004cf9d5  MOVSX EDX,word ptr [EBP + 0x8]
004cf9d9  IMUL EDX,EDX,0xe
004cf9dc  MOV ESI,dword ptr [EBP + -0x10]
004cf9df  ADD EDX,dword ptr [ESI + 0x428]
004cf9e5  MOV word ptr [EDX + ECX*0x2 + -0x2],AX
004cf9ea  MOV EAX,dword ptr [EBP + -0x10]
004cf9ed  MOV ECX,dword ptr [EAX + 0x428]
004cf9f3  MOVSX EDX,word ptr [EBP + 0x8]
004cf9f7  IMUL EDX,EDX,0xe
004cf9fa  LEA EAX,[ECX + EDX*0x1 + 0x70]
004cf9fe  MOVSX ECX,word ptr [EBP + 0x10]
004cfa02  MOVZX EDX,word ptr [EAX + ECX*0x2 + -0x2]
004cfa07  SHR EDX,0x1
004cfa09  MOVSX EAX,word ptr [EBP + 0x10]
004cfa0d  MOVSX ECX,word ptr [EBP + 0x8]
004cfa11  IMUL ECX,ECX,0xe
004cfa14  MOV ESI,dword ptr [EBP + -0x10]
004cfa17  MOV ESI,dword ptr [ESI + 0x428]
004cfa1d  LEA ECX,[ESI + ECX*0x1 + 0x70]
004cfa21  MOV word ptr [ECX + EAX*0x2 + -0x2],DX
004cfa26  MOV EDX,dword ptr [EBP + -0x10]
004cfa29  MOV EAX,dword ptr [EDX + 0x428]
004cfa2f  MOVSX ECX,word ptr [EBP + 0x8]
004cfa33  IMUL ECX,ECX,0xe
004cfa36  LEA EDX,[EAX + ECX*0x1 + 0xe0]
004cfa3d  MOVSX EAX,word ptr [EBP + 0x10]
004cfa41  MOVZX ECX,word ptr [EDX + EAX*0x2 + -0x2]
004cfa46  SHR ECX,0x1
004cfa48  MOVSX EDX,word ptr [EBP + 0x10]
004cfa4c  MOVSX EAX,word ptr [EBP + 0x8]
004cfa50  IMUL EAX,EAX,0xe
004cfa53  MOV ESI,dword ptr [EBP + -0x10]
004cfa56  MOV ESI,dword ptr [ESI + 0x428]
004cfa5c  LEA EAX,[ESI + EAX*0x1 + 0xe0]
004cfa63  MOV word ptr [EAX + EDX*0x2 + -0x2],CX
004cfa68  MOV ECX,dword ptr [EBP + -0x10]
004cfa6b  MOV EDX,dword ptr [ECX + 0x428]
004cfa71  MOVSX EAX,word ptr [EBP + 0x8]
004cfa75  IMUL EAX,EAX,0x7
004cfa78  LEA ECX,[EDX + EAX*0x1 + 0x150]
004cfa7f  MOVSX EDX,word ptr [EBP + 0x10]
004cfa83  MOVZX EAX,byte ptr [ECX + EDX*0x1 + -0x1]
004cfa88  SHR EAX,0x1
004cfa8a  MOVSX ECX,word ptr [EBP + 0x10]
004cfa8e  MOVSX EDX,word ptr [EBP + 0x8]
004cfa92  IMUL EDX,EDX,0x7
004cfa95  MOV ESI,dword ptr [EBP + -0x10]
004cfa98  MOV ESI,dword ptr [ESI + 0x428]
004cfa9e  LEA EDX,[ESI + EDX*0x1 + 0x150]
004cfaa5  MOV byte ptr [EDX + ECX*0x1 + -0x1],AL
004cfaa9  MOV word ptr [EBP + -0xc],0x0
004cfaaf  JMP 0x004cfabd
004cfab1  MOV AX,word ptr [EBP + -0xc]
004cfab5  ADD AX,0x1
004cfab9  MOV word ptr [EBP + -0xc],AX
004cfabd  MOVSX ECX,word ptr [EBP + -0xc]
004cfac1  CMP ECX,0x6
004cfac4  JGE 0x004cfb1b
004cfac6  MOV EDX,dword ptr [EBP + -0x10]
004cfac9  MOV EAX,dword ptr [EDX + 0x428]
004cfacf  MOVSX ECX,word ptr [EBP + 0x8]
004cfad3  IMUL ECX,ECX,0x2a
004cfad6  LEA EDX,[EAX + ECX*0x1 + 0x188]
004cfadd  MOVSX EAX,word ptr [EBP + -0xc]
004cfae1  IMUL EAX,EAX,0x7
004cfae4  ADD EDX,EAX
004cfae6  MOVSX ECX,word ptr [EBP + 0x10]
004cfaea  MOVZX EDX,byte ptr [EDX + ECX*0x1 + -0x1]
004cfaef  SHR EDX,0x1
004cfaf1  MOVSX EAX,word ptr [EBP + 0x10]
004cfaf5  MOVSX ECX,word ptr [EBP + -0xc]
004cfaf9  IMUL ECX,ECX,0x7
004cfafc  MOVSX ESI,word ptr [EBP + 0x8]
004cfb00  IMUL ESI,ESI,0x2a
004cfb03  MOV EDI,dword ptr [EBP + -0x10]
004cfb06  MOV EDI,dword ptr [EDI + 0x428]
004cfb0c  LEA ESI,[EDI + ESI*0x1 + 0x188]
004cfb13  ADD ESI,ECX
004cfb15  MOV byte ptr [ESI + EAX*0x1 + -0x1],DL
004cfb19  JMP 0x004cfab1
004cfb1b  POP EDI
004cfb1c  POP ESI
004cfb1d  MOV ESP,EBP
004cfb1f  POP EBP
004cfb20  RET 0xc
