; FUN_005dcf70  005dcf70
005dcf70  PUSH EBP
005dcf71  MOV EBP,ESP
005dcf73  SUB ESP,0x4c
005dcf76  MOV dword ptr [EBP + -0x28],ECX
005dcf79  MOV ECX,dword ptr [EBP + -0x28]
005dcf7c  CALL 0x005f3130
005dcf81  MOV dword ptr [EBP + -0x8],0x0
005dcf88  MOV dword ptr [EBP + -0x4],0x0
005dcf8f  LEA EAX,[EBP + -0x8]
005dcf92  PUSH EAX
005dcf93  CALL dword ptr [0x006b229c]
005dcf99  ADD ESP,0x4
005dcf9c  CMP dword ptr [EBP + -0x4],0x0
005dcfa0  JG 0x005dcfc1
005dcfa2  JL 0x005dcfaa
005dcfa4  CMP dword ptr [EBP + -0x8],0x0
005dcfa8  JA 0x005dcfc1
005dcfaa  PUSH 0x17c
005dcfaf  PUSH 0x6d4b54
005dcfb4  PUSH 0x6d4b4c
005dcfb9  CALL 0x005e9f20
005dcfbe  ADD ESP,0xc
005dcfc1  MOV EDX,dword ptr [EBP + -0x8]
005dcfc4  SUB EDX,dword ptr [0x00794900]
005dcfca  MOV EAX,dword ptr [EBP + -0x4]
005dcfcd  SBB EAX,dword ptr [0x00794904]
005dcfd3  MOV dword ptr [EBP + -0x30],EDX
005dcfd6  MOV dword ptr [EBP + -0x2c],EAX
005dcfd9  JS 0x005dd008
005dcfdb  JG 0x005dcfe3
005dcfdd  CMP dword ptr [EBP + -0x30],0x0
005dcfe1  JC 0x005dd008
005dcfe3  MOV ECX,dword ptr [EBP + -0x8]
005dcfe6  SUB ECX,dword ptr [0x00794900]
005dcfec  MOV EDX,dword ptr [EBP + -0x4]
005dcfef  SBB EDX,dword ptr [0x00794904]
005dcff5  MOV dword ptr [EBP + -0x38],ECX
005dcff8  MOV dword ptr [EBP + -0x34],EDX
005dcffb  JS 0x005dd05a
005dcffd  JG 0x005dd008
005dcfff  CMP dword ptr [EBP + -0x38],0xb4
005dd006  JBE 0x005dd05a
005dd008  MOV EAX,dword ptr [EBP + -0x8]
005dd00b  MOV [0x00794900],EAX
005dd010  MOV ECX,dword ptr [EBP + -0x4]
005dd013  MOV dword ptr [0x00794904],ECX
005dd019  CMP dword ptr [0x007960d8],0x0
005dd020  JZ 0x005dd05a
005dd022  MOV EDX,dword ptr [0x007960d8]
005dd028  CMP dword ptr [EDX + 0x8],0x0
005dd02c  JZ 0x005dd05a
005dd02e  CMP dword ptr [0x007947e0],0x0
005dd035  JZ 0x005dd05a
005dd037  MOV EAX,[0x007960d8]
005dd03c  MOV ECX,dword ptr [EAX + 0x8]
005dd03f  CALL 0x0060a4d0
005dd044  MOV ECX,dword ptr [0x007947e0]
005dd04a  MOV EDX,dword ptr [ECX]
005dd04c  MOV ECX,dword ptr [0x007947e0]
005dd052  MOV EAX,dword ptr [EDX + 0x384]
005dd058  CALL EAX
005dd05a  CMP dword ptr [0x0162ee80],0x0
005dd061  JZ 0x005dd06e
005dd063  MOV ECX,dword ptr [0x007947e4]
005dd069  CALL 0x005d8850
005dd06e  MOV ECX,dword ptr [EBP + -0x28]
005dd071  MOV DL,byte ptr [ECX + 0x25]
005dd074  MOV byte ptr [EBP + -0x11],DL
005dd077  MOVZX EAX,byte ptr [EBP + -0x11]
005dd07b  TEST EAX,EAX
005dd07d  JZ 0x005dd0a5
005dd07f  MOV ECX,dword ptr [EBP + -0x28]
005dd082  MOV DL,byte ptr [ECX + 0x26]
005dd085  MOV byte ptr [EBP + -0x12],DL
005dd088  MOVZX EAX,byte ptr [EBP + -0x12]
005dd08c  TEST EAX,EAX
005dd08e  JZ 0x005dd0a5
005dd090  MOVZX ECX,byte ptr [0x0079346d]
005dd097  TEST ECX,ECX
005dd099  JZ 0x005dd0a5
005dd09b  CALL 0x00579d50
005dd0a0  JMP 0x005dd160
005dd0a5  MOV EDX,dword ptr [EBP + -0x28]
005dd0a8  MOV AL,byte ptr [EDX + 0x25]
005dd0ab  MOV byte ptr [EBP + -0x13],AL
005dd0ae  MOVZX ECX,byte ptr [EBP + -0x13]
005dd0b2  TEST ECX,ECX
005dd0b4  JZ 0x005dd160
005dd0ba  CMP dword ptr [0x0162ee80],0x0
005dd0c1  JZ 0x005dd160
005dd0c7  MOV ECX,dword ptr [EBP + -0x28]
005dd0ca  CALL 0x00636760
005dd0cf  MOVZX EDX,AL
005dd0d2  TEST EDX,EDX
005dd0d4  JNZ 0x005dd160
005dd0da  MOV ECX,dword ptr [EBP + -0x28]
005dd0dd  CALL 0x005f3b50
005dd0e2  MOVZX EAX,AL
005dd0e5  TEST EAX,EAX
005dd0e7  JNZ 0x005dd160
005dd0e9  MOV ECX,dword ptr [EBP + -0x28]
005dd0ec  MOV EDX,dword ptr [ECX + 0x20]
005dd0ef  CMP EDX,dword ptr [0x00793574]
005dd0f5  JLE 0x005dd160
005dd0f7  MOVZX EAX,byte ptr [0x0079346d]
005dd0fe  TEST EAX,EAX
005dd100  JNZ 0x005dd150
005dd102  MOV ECX,dword ptr [0x0162ee84]
005dd108  MOV dword ptr [EBP + -0x18],ECX
005dd10b  MOV EDX,dword ptr [EBP + -0x18]
005dd10e  MOV byte ptr [EDX + 0x25],0x0
005dd112  MOV EAX,[0x007947e4]
005dd117  MOV EDX,dword ptr [EAX]
005dd119  MOV ECX,dword ptr [0x007947e4]
005dd11f  MOV EAX,dword ptr [EDX + 0x168]
005dd125  CALL EAX
005dd127  MOVZX ECX,AL
005dd12a  TEST ECX,ECX
005dd12c  JZ 0x005dd14e
005dd12e  MOV EDX,dword ptr [0x0162ee84]
005dd134  MOV dword ptr [EBP + -0x1c],EDX
005dd137  MOV EAX,dword ptr [EBP + -0x1c]
005dd13a  MOV byte ptr [EAX + 0x25],0x1
005dd13e  CALL 0x00579da0
005dd143  MOV ECX,dword ptr [EBP + -0x28]
005dd146  ADD EAX,dword ptr [ECX + 0x20]
005dd149  MOV [0x00793574],EAX
005dd14e  JMP 0x005dd160
005dd150  CALL 0x00579da0
005dd155  MOV EDX,dword ptr [EBP + -0x28]
005dd158  ADD EAX,dword ptr [EDX + 0x20]
005dd15b  MOV [0x00793574],EAX
005dd160  MOV EAX,dword ptr [EBP + -0x28]
005dd163  MOV ECX,dword ptr [EBP + -0x28]
005dd166  MOV EDX,dword ptr [EAX + 0x20]
005dd169  CMP EDX,dword ptr [ECX + 0x4f1c]
005dd16f  JLE 0x005dd3f1
005dd175  MOV EAX,[0x007948f8]
005dd17a  ADD EAX,0x1
005dd17d  MOV [0x007948f8],EAX
005dd182  CMP dword ptr [0x007948f8],0x3e8
005dd18c  JL 0x005dd1f1
005dd18e  MOV dword ptr [0x007948f8],0x0
005dd198  PUSH 0x0
005dd19a  CALL dword ptr [0x006b229c]
005dd1a0  ADD ESP,0x4
005dd1a3  MOV dword ptr [EBP + -0x24],EAX
005dd1a6  MOV dword ptr [EBP + -0x20],EDX
005dd1a9  MOV ECX,dword ptr [EBP + -0x24]
005dd1ac  PUSH ECX
005dd1ad  MOV EDX,dword ptr [0x007960d8]
005dd1b3  MOV ECX,dword ptr [EDX + 0x24]
005dd1b6  CALL 0x00614670
005dd1bb  MOV dword ptr [EBP + -0x10],0x0
005dd1c2  JMP 0x005dd1cd
005dd1c4  MOV EAX,dword ptr [EBP + -0x10]
005dd1c7  ADD EAX,0x1
005dd1ca  MOV dword ptr [EBP + -0x10],EAX
005dd1cd  CMP dword ptr [EBP + -0x10],0x14
005dd1d1  JGE 0x005dd1f1
005dd1d3  PUSH 0x3b9aca00
005dd1d8  CALL 0x0062fbf0
005dd1dd  ADD ESP,0x4
005dd1e0  PUSH EAX
005dd1e1  MOV ECX,dword ptr [0x007960d8]
005dd1e7  MOV ECX,dword ptr [ECX + 0x24]
005dd1ea  CALL 0x00614670
005dd1ef  JMP 0x005dd1c4
005dd1f1  MOV EDX,dword ptr [EBP + -0x28]
005dd1f4  MOV EAX,dword ptr [EDX + 0x20]
005dd1f7  ADD EAX,0xc8
005dd1fc  MOV ECX,dword ptr [EBP + -0x28]
005dd1ff  MOV dword ptr [ECX + 0x4f1c],EAX
005dd205  PUSH 0x1f40
005dd20a  CALL 0x0062fbf0
005dd20f  ADD ESP,0x4
005dd212  MOV dword ptr [EBP + -0xc],EAX
005dd215  CMP dword ptr [EBP + -0xc],0x62
005dd219  JNZ 0x005dd227
005dd21b  PUSH 0x0
005dd21d  MOV ECX,dword ptr [EBP + -0x28]
005dd220  CALL 0x005de880
005dd225  JMP 0x005dd273
005dd227  PUSH 0x1e
005dd229  CALL 0x0062fbf0
005dd22e  ADD ESP,0x4
005dd231  MOV EDX,dword ptr [EBP + -0x28]
005dd234  ADD EAX,dword ptr [EDX + 0x4ed0]
005dd23a  MOV ECX,dword ptr [EBP + -0x28]
005dd23d  MOV dword ptr [ECX + 0x4ed0],EAX
005dd243  MOV EDX,dword ptr [EBP + -0x28]
005dd246  CMP dword ptr [EDX + 0x4ed0],0x5e69ec0
005dd250  JGE 0x005dd260
005dd252  MOV EAX,dword ptr [EBP + -0x28]
005dd255  MOV ECX,dword ptr [EAX + 0x4ed0]
005dd25b  MOV dword ptr [EBP + -0x3c],ECX
005dd25e  JMP 0x005dd267
005dd260  MOV dword ptr [EBP + -0x3c],0x5e69ec0
005dd267  MOV EDX,dword ptr [EBP + -0x28]
005dd26a  MOV EAX,dword ptr [EBP + -0x3c]
005dd26d  MOV dword ptr [EDX + 0x4ed0],EAX
005dd273  CMP dword ptr [EBP + -0xc],0xf
005dd277  JNZ 0x005dd285
005dd279  PUSH 0x1
005dd27b  MOV ECX,dword ptr [EBP + -0x28]
005dd27e  CALL 0x005de880
005dd283  JMP 0x005dd2d1
005dd285  PUSH 0x2d
005dd287  CALL 0x0062fbf0
005dd28c  ADD ESP,0x4
005dd28f  MOV ECX,dword ptr [EBP + -0x28]
005dd292  ADD EAX,dword ptr [ECX + 0x4ed4]
005dd298  MOV EDX,dword ptr [EBP + -0x28]
005dd29b  MOV dword ptr [EDX + 0x4ed4],EAX
005dd2a1  MOV EAX,dword ptr [EBP + -0x28]
005dd2a4  CMP dword ptr [EAX + 0x4ed4],0x5e69ec0
005dd2ae  JGE 0x005dd2be
005dd2b0  MOV ECX,dword ptr [EBP + -0x28]
005dd2b3  MOV EDX,dword ptr [ECX + 0x4ed4]
005dd2b9  MOV dword ptr [EBP + -0x40],EDX
005dd2bc  JMP 0x005dd2c5
005dd2be  MOV dword ptr [EBP + -0x40],0x5e69ec0
005dd2c5  MOV EAX,dword ptr [EBP + -0x28]
005dd2c8  MOV ECX,dword ptr [EBP + -0x40]
005dd2cb  MOV dword ptr [EAX + 0x4ed4],ECX
005dd2d1  CMP dword ptr [EBP + -0xc],0x17
005dd2d5  JNZ 0x005dd2e3
005dd2d7  PUSH 0x5
005dd2d9  MOV ECX,dword ptr [EBP + -0x28]
005dd2dc  CALL 0x005de880
005dd2e1  JMP 0x005dd32f
005dd2e3  PUSH 0x4b
005dd2e5  CALL 0x0062fbf0
005dd2ea  ADD ESP,0x4
005dd2ed  MOV EDX,dword ptr [EBP + -0x28]
005dd2f0  ADD EAX,dword ptr [EDX + 0x4ed8]
005dd2f6  MOV ECX,dword ptr [EBP + -0x28]
005dd2f9  MOV dword ptr [ECX + 0x4ed8],EAX
005dd2ff  MOV EDX,dword ptr [EBP + -0x28]
005dd302  CMP dword ptr [EDX + 0x4ed8],0x5e69ec0
005dd30c  JGE 0x005dd31c
005dd30e  MOV EAX,dword ptr [EBP + -0x28]
005dd311  MOV ECX,dword ptr [EAX + 0x4ed8]
005dd317  MOV dword ptr [EBP + -0x44],ECX
005dd31a  JMP 0x005dd323
005dd31c  MOV dword ptr [EBP + -0x44],0x5e69ec0
005dd323  MOV EDX,dword ptr [EBP + -0x28]
005dd326  MOV EAX,dword ptr [EBP + -0x44]
005dd329  MOV dword ptr [EDX + 0x4ed8],EAX
005dd32f  CMP dword ptr [EBP + -0xc],0x2d
005dd333  JNZ 0x005dd341
005dd335  PUSH 0x19
005dd337  MOV ECX,dword ptr [EBP + -0x28]
005dd33a  CALL 0x005de880
005dd33f  JMP 0x005dd390
005dd341  PUSH 0x96
005dd346  CALL 0x0062fbf0
005dd34b  ADD ESP,0x4
005dd34e  MOV ECX,dword ptr [EBP + -0x28]
005dd351  ADD EAX,dword ptr [ECX + 0x4edc]
005dd357  MOV EDX,dword ptr [EBP + -0x28]
005dd35a  MOV dword ptr [EDX + 0x4edc],EAX
005dd360  MOV EAX,dword ptr [EBP + -0x28]
005dd363  CMP dword ptr [EAX + 0x4edc],0x5e69ec0
005dd36d  JGE 0x005dd37d
005dd36f  MOV ECX,dword ptr [EBP + -0x28]
005dd372  MOV EDX,dword ptr [ECX + 0x4edc]
005dd378  MOV dword ptr [EBP + -0x48],EDX
005dd37b  JMP 0x005dd384
005dd37d  MOV dword ptr [EBP + -0x48],0x5e69ec0
005dd384  MOV EAX,dword ptr [EBP + -0x28]
005dd387  MOV ECX,dword ptr [EBP + -0x48]
005dd38a  MOV dword ptr [EAX + 0x4edc],ECX
005dd390  CMP dword ptr [EBP + -0xc],0x39
005dd394  JNZ 0x005dd3a2
005dd396  PUSH 0x64
005dd398  MOV ECX,dword ptr [EBP + -0x28]
005dd39b  CALL 0x005de880
005dd3a0  JMP 0x005dd3f1
005dd3a2  PUSH 0x1f4
005dd3a7  CALL 0x0062fbf0
005dd3ac  ADD ESP,0x4
005dd3af  MOV EDX,dword ptr [EBP + -0x28]
005dd3b2  ADD EAX,dword ptr [EDX + 0x4ee0]
005dd3b8  MOV ECX,dword ptr [EBP + -0x28]
005dd3bb  MOV dword ptr [ECX + 0x4ee0],EAX
005dd3c1  MOV EDX,dword ptr [EBP + -0x28]
005dd3c4  CMP dword ptr [EDX + 0x4ee0],0x5e69ec0
005dd3ce  JGE 0x005dd3de
005dd3d0  MOV EAX,dword ptr [EBP + -0x28]
005dd3d3  MOV ECX,dword ptr [EAX + 0x4ee0]
005dd3d9  MOV dword ptr [EBP + -0x4c],ECX
005dd3dc  JMP 0x005dd3e5
005dd3de  MOV dword ptr [EBP + -0x4c],0x5e69ec0
005dd3e5  MOV EDX,dword ptr [EBP + -0x28]
005dd3e8  MOV EAX,dword ptr [EBP + -0x4c]
005dd3eb  MOV dword ptr [EDX + 0x4ee0],EAX
005dd3f1  MOV ESP,EBP
005dd3f3  POP EBP
005dd3f4  RET
