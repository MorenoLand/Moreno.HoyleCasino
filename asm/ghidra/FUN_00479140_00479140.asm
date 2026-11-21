; FUN_00479140  00479140
00479140  PUSH EBP
00479141  MOV EBP,ESP
00479143  PUSH -0x1
00479145  PUSH 0x69fdd3
0047914a  MOV EAX,FS:[0x0]
00479150  PUSH EAX
00479151  SUB ESP,0x10
00479154  MOV EAX,[0x00781870]
00479159  XOR EAX,EBP
0047915b  PUSH EAX
0047915c  LEA EAX,[EBP + -0xc]
0047915f  MOV FS:[0x0],EAX
00479165  MOV dword ptr [EBP + -0x1c],ECX
00479168  MOV ECX,dword ptr [EBP + -0x1c]
0047916b  CALL 0x005e9e20
00479170  MOV dword ptr [EBP + -0x4],0x0
00479177  MOV EAX,dword ptr [EBP + -0x1c]
0047917a  MOV dword ptr [EAX],0x6bc690
00479180  MOV ECX,dword ptr [EBP + -0x1c]
00479183  ADD ECX,0x38
00479186  CALL 0x004f4200
0047918b  MOV byte ptr [EBP + -0x4],0x1
0047918f  MOV ECX,dword ptr [EBP + -0x1c]
00479192  MOV dword ptr [ECX + 0x420],0x1
0047919c  MOV EDX,dword ptr [EBP + -0x1c]
0047919f  MOV byte ptr [EDX + 0x7d2],0x1
004791a6  MOV EAX,dword ptr [EBP + -0x1c]
004791a9  MOV dword ptr [EAX + 0x42c],0x0
004791b3  MOV ECX,dword ptr [EBP + -0x1c]
004791b6  MOV dword ptr [ECX + 0x434],0x0
004791c0  MOV EDX,dword ptr [EBP + -0x1c]
004791c3  MOV dword ptr [EDX + 0x450],0x0
004791cd  MOV EAX,dword ptr [EBP + -0x1c]
004791d0  MOV dword ptr [EAX + 0x454],0x0
004791da  MOV ECX,dword ptr [EBP + -0x1c]
004791dd  MOV dword ptr [ECX + 0x45c],0x0
004791e7  MOV EDX,dword ptr [EBP + -0x1c]
004791ea  MOV dword ptr [EDX + 0x458],0x0
004791f4  MOV EAX,dword ptr [EBP + -0x1c]
004791f7  MOV dword ptr [EAX + 0x460],0x0
00479201  MOV ECX,dword ptr [EBP + -0x1c]
00479204  MOV dword ptr [ECX + 0x464],0x0
0047920e  MOV EDX,dword ptr [EBP + -0x1c]
00479211  MOV dword ptr [EDX + 0x468],0x0
0047921b  MOV EAX,dword ptr [EBP + -0x1c]
0047921e  MOV dword ptr [EAX + 0x46c],0x0
00479228  MOV ECX,dword ptr [EBP + -0x1c]
0047922b  MOV dword ptr [ECX + 0x470],0x0
00479235  MOV EDX,dword ptr [EBP + -0x1c]
00479238  MOV dword ptr [EDX + 0x474],0x0
00479242  MOV EAX,dword ptr [EBP + -0x1c]
00479245  MOV dword ptr [EAX + 0x478],0x0
0047924f  MOV ECX,dword ptr [EBP + -0x1c]
00479252  MOV dword ptr [ECX + 0x47c],0x0
0047925c  MOV EDX,dword ptr [EBP + -0x1c]
0047925f  MOV dword ptr [EDX + 0x480],0x0
00479269  MOV EAX,dword ptr [EBP + -0x1c]
0047926c  MOV dword ptr [EAX + 0x428],0x0
00479276  MOV ECX,dword ptr [EBP + -0x1c]
00479279  MOV dword ptr [ECX + 0x2c],0x0
00479280  MOV word ptr [EBP + -0x10],0x0
00479286  JMP 0x00479294
00479288  MOV DX,word ptr [EBP + -0x10]
0047928c  ADD DX,0x1
00479290  MOV word ptr [EBP + -0x10],DX
00479294  MOVSX EAX,word ptr [EBP + -0x10]
00479298  CMP EAX,0x8
0047929b  JGE 0x004792ae
0047929d  MOVSX ECX,word ptr [EBP + -0x10]
004792a1  MOV EDX,dword ptr [EBP + -0x1c]
004792a4  MOV dword ptr [EDX + ECX*0x4 + 0x4],0x0
004792ac  JMP 0x00479288
004792ae  MOV EAX,dword ptr [EBP + -0x1c]
004792b1  MOV dword ptr [EAX + 0x24],0x0
004792b8  MOV ECX,dword ptr [EBP + -0x1c]
004792bb  MOV dword ptr [ECX + 0x28],0x0
004792c2  MOV EDX,dword ptr [EBP + -0x1c]
004792c5  MOV dword ptr [EDX + 0x30],0x0
004792cc  MOV EAX,dword ptr [EBP + -0x1c]
004792cf  MOV dword ptr [EAX + 0x34],0x0
004792d6  MOV ECX,dword ptr [EBP + -0x1c]
004792d9  MOV byte ptr [ECX + 0x494],0x1
004792e0  MOV byte ptr [0x00791360],0x0
004792e7  PUSH 0x0
004792e9  MOV ECX,dword ptr [EBP + -0x1c]
004792ec  CALL 0x0047b9a0
004792f1  MOV EDX,dword ptr [EBP + -0x1c]
004792f4  MOV dword ptr [EDX + 0x430],0x1
004792fe  MOV ECX,dword ptr [0x00791eb8]
00479304  CALL 0x005da7b0
00479309  MOV ECX,dword ptr [EBP + -0x1c]
0047930c  MOV byte ptr [ECX + 0x3e0],AL
00479312  MOV ECX,dword ptr [0x00791eb8]
00479318  CALL 0x005da830
0047931d  MOV EDX,dword ptr [EBP + -0x1c]
00479320  MOV byte ptr [EDX + 0x7d3],AL
00479326  MOV EAX,dword ptr [EBP + -0x1c]
00479329  MOV byte ptr [EAX + 0x408],0x0
00479330  MOV ECX,dword ptr [EBP + -0x1c]
00479333  MOV word ptr [ECX + 0x7d0],0x0
0047933c  MOV word ptr [EBP + -0x10],0x0
00479342  JMP 0x00479350
00479344  MOV DX,word ptr [EBP + -0x10]
00479348  ADD DX,0x1
0047934c  MOV word ptr [EBP + -0x10],DX
00479350  MOVSX EAX,word ptr [EBP + -0x10]
00479354  CMP EAX,0xc8
00479359  JGE 0x0047936f
0047935b  MOVSX ECX,word ptr [EBP + -0x10]
0047935f  MOV EDX,dword ptr [EBP + -0x1c]
00479362  MOV dword ptr [EDX + ECX*0x4 + 0x4b0],0x0
0047936d  JMP 0x00479344
0047936f  MOV EAX,dword ptr [EBP + -0x1c]
00479372  MOV dword ptr [EAX + 0x3dc],0x0
0047937c  MOV ECX,dword ptr [EBP + -0x1c]
0047937f  MOV dword ptr [ECX + 0x4a4],0x0
00479389  PUSH 0xb
0047938b  MOV ECX,dword ptr [0x0162ee84]
00479391  CALL 0x006375d0
00479396  MOV dword ptr [EBP + -0x18],EAX
00479399  MOV EDX,dword ptr [EBP + -0x1c]
0047939c  MOV dword ptr [EDX + 0x414],0x0
004793a6  MOV EAX,dword ptr [EBP + -0x1c]
004793a9  MOV dword ptr [EAX + 0x484],0x0
004793b3  MOV ECX,dword ptr [EBP + -0x1c]
004793b6  MOV dword ptr [ECX + 0xd0],0xffffffff
004793c0  MOV EDX,dword ptr [EBP + -0x1c]
004793c3  MOV dword ptr [EDX + 0xd4],0xffffffff
004793cd  MOV ECX,dword ptr [EBP + -0x1c]
004793d0  CALL 0x0047f950
004793d5  PUSH EAX
004793d6  CALL 0x0062fbf0
004793db  ADD ESP,0x4
004793de  MOV ECX,dword ptr [EBP + -0x1c]
004793e1  MOV dword ptr [ECX + 0xd8],EAX
004793e7  MOV EDX,dword ptr [EBP + -0x1c]
004793ea  MOV dword ptr [EDX + 0x41c],0x0
004793f4  MOV EAX,dword ptr [EBP + -0x1c]
004793f7  MOV dword ptr [EAX + 0x424],0x1
00479401  MOV ECX,dword ptr [EBP + -0x1c]
00479404  MOV byte ptr [ECX + 0xe8],0x0
0047940b  MOV word ptr [EBP + -0x14],0x0
00479411  JMP 0x0047941f
00479413  MOV DX,word ptr [EBP + -0x14]
00479417  ADD DX,0x1
0047941b  MOV word ptr [EBP + -0x14],DX
0047941f  MOVSX EAX,word ptr [EBP + -0x14]
00479423  CMP EAX,0xc8
00479428  JGE 0x0047943e
0047942a  MOVSX ECX,word ptr [EBP + -0x14]
0047942e  MOV EDX,dword ptr [EBP + -0x1c]
00479431  MOV dword ptr [EDX + ECX*0x4 + 0x4b0],0x0
0047943c  JMP 0x00479413
0047943e  MOV EAX,dword ptr [EBP + -0x1c]
00479441  MOV ECX,dword ptr [EBP + -0x18]
00479444  MOV EDX,dword ptr [ECX + 0x4]
00479447  MOV dword ptr [EAX + 0xcc],EDX
0047944d  MOV EAX,dword ptr [EBP + -0x1c]
00479450  MOV byte ptr [EAX + 0xc8],0x0
00479457  MOV ECX,dword ptr [0x00793578]
0047945d  CALL 0x0057ae30
00479462  MOV dword ptr [EBP + -0x4],0xffffffff
00479469  MOV EAX,dword ptr [EBP + -0x1c]
0047946c  MOV ECX,dword ptr [EBP + -0xc]
0047946f  MOV dword ptr FS:[0x0],ECX
00479476  POP ECX
00479477  MOV ESP,EBP
00479479  POP EBP
0047947a  RET
