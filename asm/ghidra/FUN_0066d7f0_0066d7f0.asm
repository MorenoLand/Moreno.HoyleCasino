; FUN_0066d7f0  0066d7f0
0066d7f0  PUSH EBP
0066d7f1  MOV EBP,ESP
0066d7f3  PUSH -0x1
0066d7f5  PUSH 0x6ad00e
0066d7fa  MOV EAX,FS:[0x0]
0066d800  PUSH EAX
0066d801  SUB ESP,0x4fc
0066d807  MOV EAX,[0x00781870]
0066d80c  XOR EAX,EBP
0066d80e  MOV dword ptr [EBP + -0x10],EAX
0066d811  PUSH ESI
0066d812  PUSH EDI
0066d813  PUSH EAX
0066d814  LEA EAX,[EBP + -0xc]
0066d817  MOV FS:[0x0],EAX
0066d81d  MOV dword ptr [EBP + 0xfffffb2c],ECX
0066d823  MOV dword ptr [EBP + 0xfffffba8],0x0
0066d82d  MOV byte ptr [EBP + 0xfffffbec],0x0
0066d834  PUSH 0x3ff
0066d839  PUSH 0x0
0066d83b  LEA EAX,[EBP + 0xfffffbed]
0066d841  PUSH EAX
0066d842  CALL 0x00686fa2
0066d847  ADD ESP,0xc
0066d84a  PUSH -0x1
0066d84c  PUSH 0x2710
0066d851  PUSH 0x0
0066d853  PUSH 0x0
0066d855  PUSH 0x263928
0066d85a  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066d860  CALL 0x005eae80
0066d865  MOV ECX,dword ptr [0x0162ee84]
0066d86b  CALL 0x005f3bf0
0066d870  PUSH EAX
0066d871  MOV ECX,dword ptr [0x0162ee84]
0066d877  MOV EDX,dword ptr [ECX]
0066d879  MOV ECX,dword ptr [0x0162ee84]
0066d87f  MOV EAX,dword ptr [EDX + 0xe0]
0066d885  CALL EAX
0066d887  MOV dword ptr [EBP + 0xfffffba8],EAX
0066d88d  PUSH 0x178
0066d892  CALL 0x00686d82
0066d897  ADD ESP,0x4
0066d89a  MOV dword ptr [EBP + 0xfffffb98],EAX
0066d8a0  MOV dword ptr [EBP + -0x4],0x0
0066d8a7  CMP dword ptr [EBP + 0xfffffb98],0x0
0066d8ae  JZ 0x0066d8c3
0066d8b0  MOV ECX,dword ptr [EBP + 0xfffffb98]
0066d8b6  CALL 0x005eaaf0
0066d8bb  MOV dword ptr [EBP + 0xfffffb28],EAX
0066d8c1  JMP 0x0066d8cd
0066d8c3  MOV dword ptr [EBP + 0xfffffb28],0x0
0066d8cd  MOV ECX,dword ptr [EBP + 0xfffffb28]
0066d8d3  MOV dword ptr [EBP + 0xfffffb9c],ECX
0066d8d9  MOV dword ptr [EBP + -0x4],0xffffffff
0066d8e0  MOV EDX,dword ptr [EBP + 0xfffffb2c]
0066d8e6  MOV EAX,dword ptr [EBP + 0xfffffb9c]
0066d8ec  MOV dword ptr [EDX + 0x1f8],EAX
0066d8f2  PUSH -0x1
0066d8f4  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066d8fa  CALL 0x005f53c0
0066d8ff  ADD EAX,0x5
0066d902  PUSH EAX
0066d903  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066d909  MOV EDX,dword ptr [ECX]
0066d90b  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066d911  MOV EAX,dword ptr [EDX + 0x54]
0066d914  CALL EAX
0066d916  PUSH EAX
0066d917  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066d91d  MOV EDX,dword ptr [ECX]
0066d91f  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066d925  MOV EAX,dword ptr [EDX + 0x4c]
0066d928  CALL EAX
0066d92a  PUSH EAX
0066d92b  PUSH 0x263929
0066d930  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066d936  MOV ECX,dword ptr [ECX + 0x1f8]
0066d93c  CALL 0x005eae80
0066d941  MOV EDX,dword ptr [EBP + 0xfffffb2c]
0066d947  MOV EAX,dword ptr [EDX + 0x1f8]
0066d94d  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066d953  MOV ECX,dword ptr [ECX + 0x1f8]
0066d959  MOV EDX,dword ptr [EAX]
0066d95b  MOV EAX,dword ptr [EDX + 0x70]
0066d95e  CALL EAX
0066d960  PUSH 0x1d0
0066d965  CALL 0x00686d82
0066d96a  ADD ESP,0x4
0066d96d  MOV dword ptr [EBP + 0xfffffb90],EAX
0066d973  MOV dword ptr [EBP + -0x4],0x1
0066d97a  CMP dword ptr [EBP + 0xfffffb90],0x0
0066d981  JZ 0x0066d996
0066d983  MOV ECX,dword ptr [EBP + 0xfffffb90]
0066d989  CALL 0x005ec5a0
0066d98e  MOV dword ptr [EBP + 0xfffffb24],EAX
0066d994  JMP 0x0066d9a0
0066d996  MOV dword ptr [EBP + 0xfffffb24],0x0
0066d9a0  MOV ECX,dword ptr [EBP + 0xfffffb24]
0066d9a6  MOV dword ptr [EBP + 0xfffffb94],ECX
0066d9ac  MOV dword ptr [EBP + -0x4],0xffffffff
0066d9b3  MOV EDX,dword ptr [EBP + 0xfffffb2c]
0066d9b9  MOV EAX,dword ptr [EBP + 0xfffffb94]
0066d9bf  MOV dword ptr [EDX + 0x1fc],EAX
0066d9c5  PUSH -0x1
0066d9c7  PUSH 0x30
0066d9c9  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066d9cf  CALL 0x005f53c0
0066d9d4  ADD EAX,0x5
0066d9d7  PUSH EAX
0066d9d8  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066d9de  MOV EDX,dword ptr [ECX]
0066d9e0  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066d9e6  MOV EAX,dword ptr [EDX + 0x54]
0066d9e9  CALL EAX
0066d9eb  ADD EAX,0xb
0066d9ee  PUSH EAX
0066d9ef  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066d9f5  MOV EDX,dword ptr [ECX]
0066d9f7  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066d9fd  MOV EAX,dword ptr [EDX + 0x4c]
0066da00  CALL EAX
0066da02  PUSH EAX
0066da03  PUSH 0x27
0066da05  PUSH 0x257
0066da0a  PUSH 0x99
0066da0f  MOV ECX,dword ptr [EBP + 0xfffffba8]
0066da15  MOV EDX,dword ptr [ECX]
0066da17  MOV ECX,dword ptr [EBP + 0xfffffba8]
0066da1d  MOV EAX,dword ptr [EDX + 0xb4]
0066da23  CALL EAX
0066da25  PUSH EAX
0066da26  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066da2c  MOV ECX,dword ptr [ECX + 0x1fc]
0066da32  CALL 0x005ec8f0
0066da37  MOV EDX,dword ptr [EBP + 0xfffffb2c]
0066da3d  MOV EAX,dword ptr [EDX + 0x1fc]
0066da43  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066da49  MOV ECX,dword ptr [ECX + 0x1fc]
0066da4f  MOV EDX,dword ptr [EAX]
0066da51  MOV EAX,dword ptr [EDX + 0x70]
0066da54  CALL EAX
0066da56  MOV ECX,dword ptr [EBP + 0xfffffba8]
0066da5c  MOV EDX,dword ptr [ECX]
0066da5e  MOV ECX,dword ptr [EBP + 0xfffffba8]
0066da64  MOV EAX,dword ptr [EDX + 0xb8]
0066da6a  CALL EAX
0066da6c  TEST EAX,EAX
0066da6e  JZ 0x0066db6a
0066da74  PUSH 0x1d0
0066da79  CALL 0x00686d82
0066da7e  ADD ESP,0x4
0066da81  MOV dword ptr [EBP + 0xfffffb88],EAX
0066da87  MOV dword ptr [EBP + -0x4],0x2
0066da8e  CMP dword ptr [EBP + 0xfffffb88],0x0
0066da95  JZ 0x0066daaa
0066da97  MOV ECX,dword ptr [EBP + 0xfffffb88]
0066da9d  CALL 0x005ec5a0
0066daa2  MOV dword ptr [EBP + 0xfffffb20],EAX
0066daa8  JMP 0x0066dab4
0066daaa  MOV dword ptr [EBP + 0xfffffb20],0x0
0066dab4  MOV ECX,dword ptr [EBP + 0xfffffb20]
0066daba  MOV dword ptr [EBP + 0xfffffb8c],ECX
0066dac0  MOV dword ptr [EBP + -0x4],0xffffffff
0066dac7  MOV EDX,dword ptr [EBP + 0xfffffb2c]
0066dacd  MOV EAX,dword ptr [EBP + 0xfffffb8c]
0066dad3  MOV dword ptr [EDX + 0x200],EAX
0066dad9  PUSH -0x1
0066dadb  PUSH 0x30
0066dadd  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066dae3  CALL 0x005f53c0
0066dae8  ADD EAX,0x5
0066daeb  PUSH EAX
0066daec  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066daf2  MOV EDX,dword ptr [ECX]
0066daf4  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066dafa  MOV EAX,dword ptr [EDX + 0x54]
0066dafd  CALL EAX
0066daff  ADD EAX,0x2e
0066db02  PUSH EAX
0066db03  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066db09  MOV EDX,dword ptr [ECX]
0066db0b  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066db11  MOV EAX,dword ptr [EDX + 0x4c]
0066db14  CALL EAX
0066db16  PUSH EAX
0066db17  PUSH 0x19
0066db19  PUSH 0x257
0066db1e  PUSH 0x96
0066db23  MOV ECX,dword ptr [EBP + 0xfffffba8]
0066db29  MOV EDX,dword ptr [ECX]
0066db2b  MOV ECX,dword ptr [EBP + 0xfffffba8]
0066db31  MOV EAX,dword ptr [EDX + 0xb8]
0066db37  CALL EAX
0066db39  PUSH EAX
0066db3a  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066db40  MOV ECX,dword ptr [ECX + 0x200]
0066db46  CALL 0x005ec8f0
0066db4b  MOV EDX,dword ptr [EBP + 0xfffffb2c]
0066db51  MOV EAX,dword ptr [EDX + 0x200]
0066db57  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066db5d  MOV ECX,dword ptr [ECX + 0x200]
0066db63  MOV EDX,dword ptr [EAX]
0066db65  MOV EAX,dword ptr [EDX + 0x70]
0066db68  CALL EAX
0066db6a  PUSH 0x1d0
0066db6f  CALL 0x00686d82
0066db74  ADD ESP,0x4
0066db77  MOV dword ptr [EBP + 0xfffffb80],EAX
0066db7d  MOV dword ptr [EBP + -0x4],0x3
0066db84  CMP dword ptr [EBP + 0xfffffb80],0x0
0066db8b  JZ 0x0066dba0
0066db8d  MOV ECX,dword ptr [EBP + 0xfffffb80]
0066db93  CALL 0x005ec5a0
0066db98  MOV dword ptr [EBP + 0xfffffb1c],EAX
0066db9e  JMP 0x0066dbaa
0066dba0  MOV dword ptr [EBP + 0xfffffb1c],0x0
0066dbaa  MOV ECX,dword ptr [EBP + 0xfffffb1c]
0066dbb0  MOV dword ptr [EBP + 0xfffffb84],ECX
0066dbb6  MOV dword ptr [EBP + -0x4],0xffffffff
0066dbbd  MOV EDX,dword ptr [EBP + 0xfffffb2c]
0066dbc3  MOV EAX,dword ptr [EBP + 0xfffffb84]
0066dbc9  MOV dword ptr [EDX + 0x178],EAX
0066dbcf  PUSH -0x1
0066dbd1  PUSH 0x11
0066dbd3  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066dbd9  CALL 0x005f53c0
0066dbde  ADD EAX,0x4
0066dbe1  PUSH EAX
0066dbe2  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066dbe8  MOV EDX,dword ptr [ECX]
0066dbea  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066dbf0  MOV EAX,dword ptr [EDX + 0x54]
0066dbf3  CALL EAX
0066dbf5  ADD EAX,0x65
0066dbf8  PUSH EAX
0066dbf9  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066dbff  MOV EDX,dword ptr [ECX]
0066dc01  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066dc07  MOV EAX,dword ptr [EDX + 0x4c]
0066dc0a  CALL EAX
0066dc0c  ADD EAX,0xe2
0066dc11  PUSH EAX
0066dc12  PUSH 0x22
0066dc14  PUSH 0xf9
0066dc19  PUSH 0x99
0066dc1e  PUSH 0x6b27f8
0066dc23  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066dc29  MOV ECX,dword ptr [ECX + 0x178]
0066dc2f  CALL 0x005ec8f0
0066dc34  MOV EDX,dword ptr [EBP + 0xfffffb2c]
0066dc3a  MOV EAX,dword ptr [EDX + 0x178]
0066dc40  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066dc46  MOV ECX,dword ptr [ECX + 0x178]
0066dc4c  MOV EDX,dword ptr [EAX]
0066dc4e  MOV EAX,dword ptr [EDX + 0x70]
0066dc51  CALL EAX
0066dc53  PUSH 0x1d0
0066dc58  CALL 0x00686d82
0066dc5d  ADD ESP,0x4
0066dc60  MOV dword ptr [EBP + 0xfffffb78],EAX
0066dc66  MOV dword ptr [EBP + -0x4],0x4
0066dc6d  CMP dword ptr [EBP + 0xfffffb78],0x0
0066dc74  JZ 0x0066dc89
0066dc76  MOV ECX,dword ptr [EBP + 0xfffffb78]
0066dc7c  CALL 0x005ec5a0
0066dc81  MOV dword ptr [EBP + 0xfffffb18],EAX
0066dc87  JMP 0x0066dc93
0066dc89  MOV dword ptr [EBP + 0xfffffb18],0x0
0066dc93  MOV ECX,dword ptr [EBP + 0xfffffb18]
0066dc99  MOV dword ptr [EBP + 0xfffffb7c],ECX
0066dc9f  MOV dword ptr [EBP + -0x4],0xffffffff
0066dca6  MOV EDX,dword ptr [EBP + 0xfffffb2c]
0066dcac  MOV EAX,dword ptr [EBP + 0xfffffb7c]
0066dcb2  MOV dword ptr [EDX + 0x1a0],EAX
0066dcb8  PUSH -0x1
0066dcba  PUSH 0x12
0066dcbc  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066dcc2  CALL 0x005f53c0
0066dcc7  ADD EAX,0x4
0066dcca  PUSH EAX
0066dccb  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066dcd1  MOV EDX,dword ptr [ECX]
0066dcd3  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066dcd9  MOV EAX,dword ptr [EDX + 0x54]
0066dcdc  CALL EAX
0066dcde  ADD EAX,0x65
0066dce1  PUSH EAX
0066dce2  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066dce8  MOV EDX,dword ptr [ECX]
0066dcea  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066dcf0  MOV EAX,dword ptr [EDX + 0x4c]
0066dcf3  CALL EAX
0066dcf5  ADD EAX,0xe2
0066dcfa  PUSH EAX
0066dcfb  PUSH 0x22
0066dcfd  PUSH 0xf9
0066dd02  PUSH 0x99
0066dd07  PUSH 0x6b27f8
0066dd0c  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066dd12  MOV ECX,dword ptr [ECX + 0x1a0]
0066dd18  CALL 0x005ec8f0
0066dd1d  MOV EDX,dword ptr [EBP + 0xfffffb2c]
0066dd23  MOV EAX,dword ptr [EDX + 0x1a0]
0066dd29  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066dd2f  MOV ECX,dword ptr [ECX + 0x1a0]
0066dd35  MOV EDX,dword ptr [EAX]
0066dd37  MOV EAX,dword ptr [EDX + 0x70]
0066dd3a  CALL EAX
0066dd3c  PUSH 0x5c
0066dd3e  CALL 0x00686d82
0066dd43  ADD ESP,0x4
0066dd46  MOV dword ptr [EBP + 0xfffffb70],EAX
0066dd4c  MOV dword ptr [EBP + -0x4],0x5
0066dd53  CMP dword ptr [EBP + 0xfffffb70],0x0
0066dd5a  JZ 0x0066dd6f
0066dd5c  MOV ECX,dword ptr [EBP + 0xfffffb70]
0066dd62  CALL 0x005f6130
0066dd67  MOV dword ptr [EBP + 0xfffffb14],EAX
0066dd6d  JMP 0x0066dd79
0066dd6f  MOV dword ptr [EBP + 0xfffffb14],0x0
0066dd79  MOV ECX,dword ptr [EBP + 0xfffffb14]
0066dd7f  MOV dword ptr [EBP + 0xfffffb74],ECX
0066dd85  MOV dword ptr [EBP + -0x4],0xffffffff
0066dd8c  MOV EDX,dword ptr [EBP + 0xfffffb2c]
0066dd92  MOV EAX,dword ptr [EBP + 0xfffffb74]
0066dd98  MOV dword ptr [EDX + 0x1f0],EAX
0066dd9e  PUSH -0x1
0066dda0  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066dda6  CALL 0x005f53c0
0066ddab  ADD EAX,0x2
0066ddae  PUSH EAX
0066ddaf  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066ddb5  MOV EDX,dword ptr [ECX]
0066ddb7  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066ddbd  MOV EAX,dword ptr [EDX + 0x54]
0066ddc0  CALL EAX
0066ddc2  ADD EAX,0x65
0066ddc5  PUSH EAX
0066ddc6  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066ddcc  MOV EDX,dword ptr [ECX]
0066ddce  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066ddd4  MOV EAX,dword ptr [EDX + 0x4c]
0066ddd7  CALL EAX
0066ddd9  ADD EAX,0x67
0066dddc  PUSH EAX
0066dddd  PUSH 0x22
0066dddf  PUSH 0x189
0066dde4  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066ddea  MOV ECX,dword ptr [ECX + 0x1f0]
0066ddf0  CALL 0x005f61d0
0066ddf5  PUSH 0x0
0066ddf7  PUSH 0xff
0066ddfc  PUSH 0xde
0066de01  MOV EDX,dword ptr [EBP + 0xfffffb2c]
0066de07  MOV ECX,dword ptr [EDX + 0x1f0]
0066de0d  CALL 0x005f6490
0066de12  MOV EAX,dword ptr [EBP + 0xfffffb2c]
0066de18  MOV ECX,dword ptr [EAX + 0x1f0]
0066de1e  MOV EDX,dword ptr [EBP + 0xfffffb2c]
0066de24  MOV EAX,dword ptr [EDX + 0x1f0]
0066de2a  MOV EDX,dword ptr [ECX]
0066de2c  MOV ECX,EAX
0066de2e  MOV EAX,dword ptr [EDX + 0x70]
0066de31  CALL EAX
0066de33  MOV ECX,dword ptr [EBP + 0xfffffba8]
0066de39  MOV EDX,dword ptr [ECX]
0066de3b  MOV ECX,dword ptr [EBP + 0xfffffba8]
0066de41  MOV EAX,dword ptr [EDX + 0xc8]
0066de47  CALL EAX
0066de49  MOV dword ptr [EBP + 0xfffffbe0],EAX
0066de4f  MOV ECX,dword ptr [EBP + 0xfffffba8]
0066de55  MOV EDX,dword ptr [ECX]
0066de57  MOV ECX,dword ptr [EBP + 0xfffffba8]
0066de5d  MOV EAX,dword ptr [EDX + 0xcc]
0066de63  CALL EAX
0066de65  MOV dword ptr [EBP + 0xfffffba0],EAX
0066de6b  MOV ECX,dword ptr [EBP + 0xfffffba0]
0066de71  PUSH ECX
0066de72  PUSH 0x6da4e4
0066de77  LEA EDX,[EBP + 0xfffffbec]
0066de7d  PUSH EDX
0066de7e  CALL dword ptr [0x006b2220]
0066de84  ADD ESP,0xc
0066de87  PUSH 0x6c2d28
0066de8c  LEA EAX,[EBP + 0xfffffbec]
0066de92  PUSH EAX
0066de93  CALL 0x005ea9c0
0066de98  ADD ESP,0x8
0066de9b  MOV dword ptr [EBP + 0xfffffbe4],EAX
0066dea1  CMP dword ptr [EBP + 0xfffffbe4],0x0
0066dea8  JNZ 0x0066dee2
0066deaa  PUSH 0x0
0066deac  PUSH 0x6e0dfc
0066deb1  CALL 0x00630f40
0066deb6  ADD ESP,0x4
0066deb9  PUSH EAX
0066deba  PUSH 0x6e0dd8
0066debf  CALL 0x00630f40
0066dec4  ADD ESP,0x4
0066dec7  PUSH EAX
0066dec8  CALL 0x0062ff10
0066decd  ADD ESP,0xc
0066ded0  PUSH 0x0
0066ded2  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066ded8  CALL 0x0066f370
0066dedd  JMP 0x0066e9c1
0066dee2  CMP dword ptr [EBP + 0xfffffbe0],0x0
0066dee9  JLE 0x0066df0d
0066deeb  PUSH 0x0
0066deed  MOV ECX,dword ptr [EBP + 0xfffffbe0]
0066def3  IMUL ECX,ECX,0x98
0066def9  IMUL ECX,ECX,0xa
0066defc  PUSH ECX
0066defd  MOV EDX,dword ptr [EBP + 0xfffffbe4]
0066df03  PUSH EDX
0066df04  CALL dword ptr [0x006b230c]
0066df0a  ADD ESP,0xc
0066df0d  MOV EAX,dword ptr [EBP + 0xfffffbe4]
0066df13  PUSH EAX
0066df14  PUSH 0xa
0066df16  PUSH 0x98
0066df1b  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066df21  ADD ECX,0x210
0066df27  PUSH ECX
0066df28  CALL dword ptr [0x006b225c]
0066df2e  ADD ESP,0x10
0066df31  MOV EDX,dword ptr [EBP + 0xfffffbe4]
0066df37  PUSH EDX
0066df38  CALL dword ptr [0x006b2258]
0066df3e  ADD ESP,0x4
0066df41  MOV EAX,[0x0162ee84]
0066df46  MOV EDX,dword ptr [EAX]
0066df48  MOV ECX,dword ptr [0x0162ee84]
0066df4e  MOV EAX,dword ptr [EDX + 0x31c]
0066df54  CALL EAX
0066df56  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066df5c  MOV dword ptr [ECX + 0x20c],EAX
0066df62  PUSH 0x0
0066df64  PUSH -0x1
0066df66  MOV EDX,dword ptr [EBP + 0xfffffb2c]
0066df6c  MOV ECX,dword ptr [EDX + 0x20c]
0066df72  CALL 0x0063a3e0
0066df77  PUSH 0x0
0066df79  PUSH 0x0
0066df7b  PUSH 0x0
0066df7d  MOV EAX,dword ptr [EBP + 0xfffffb2c]
0066df83  MOV ECX,dword ptr [EAX + 0x4]
0066df86  PUSH ECX
0066df87  MOV EDX,dword ptr [EBP + 0xfffffb2c]
0066df8d  MOV EAX,dword ptr [EDX + 0x24c]
0066df93  PUSH EAX
0066df94  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066df9a  MOV ECX,dword ptr [ECX + 0x20c]
0066dfa0  CALL 0x0063a8d0
0066dfa5  MOV EDX,dword ptr [EBP + 0xfffffb2c]
0066dfab  MOV EAX,dword ptr [EDX + 0x248]
0066dfb1  MOV dword ptr [EBP + 0xfffffb38],EAX
0066dfb7  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066dfbd  MOV EDX,dword ptr [ECX + 0x20c]
0066dfc3  MOV dword ptr [EBP + 0xfffffb3c],EDX
0066dfc9  MOV ECX,dword ptr [EBP + 0xfffffb3c]
0066dfcf  CALL 0x0063aac0
0066dfd4  MOV ECX,dword ptr [EBP + 0xfffffb38]
0066dfda  MOV dword ptr [EAX],ECX
0066dfdc  MOV EDX,dword ptr [EBP + 0xfffffb2c]
0066dfe2  MOV EAX,dword ptr [EDX + 0x248]
0066dfe8  MOV dword ptr [EBP + 0xfffffb10],EAX
0066dfee  CMP dword ptr [EBP + 0xfffffb10],0x2
0066dff5  JZ 0x0066e00a
0066dff7  CMP dword ptr [EBP + 0xfffffb10],0x3
0066dffe  JZ 0x0066e06f
0066e000  JMP 0x0066e097
0066e00a  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066e010  ADD ECX,0x250
0066e016  SUB ESP,0xc
0066e019  MOV EDX,ESP
0066e01b  MOV EAX,dword ptr [ECX]
0066e01d  MOV dword ptr [EDX],EAX
0066e01f  MOV EAX,dword ptr [ECX + 0x4]
0066e022  MOV dword ptr [EDX + 0x4],EAX
0066e025  MOV ECX,dword ptr [ECX + 0x8]
0066e028  MOV dword ptr [EDX + 0x8],ECX
0066e02b  MOV EDX,dword ptr [0x0162ee84]
0066e031  MOV EAX,dword ptr [EDX]
0066e033  MOV ECX,dword ptr [0x0162ee84]
0066e039  MOV EDX,dword ptr [EAX + 0x1f0]
0066e03f  CALL EDX
0066e041  MOV dword ptr [EBP + 0xfffffb30],EAX
0066e047  MOV EAX,dword ptr [EBP + 0xfffffb2c]
0066e04d  MOV ECX,dword ptr [EAX + 0x20c]
0066e053  MOV dword ptr [EBP + 0xfffffb34],ECX
0066e059  MOV ECX,dword ptr [EBP + 0xfffffb34]
0066e05f  CALL 0x0063aac0
0066e064  MOV EDX,dword ptr [EBP + 0xfffffb30]
0066e06a  MOV dword ptr [EAX + 0x54],EDX
0066e06d  JMP 0x0066e097
0066e06f  MOV ESI,dword ptr [EBP + 0xfffffb2c]
0066e075  ADD ESI,0x25c
0066e07b  MOV EAX,dword ptr [EBP + 0xfffffb2c]
0066e081  MOV ECX,dword ptr [EAX + 0x20c]
0066e087  MOV EDX,dword ptr [ECX + 0x20]
0066e08a  MOV EDI,dword ptr [EDX + 0x14]
0066e08d  ADD EDI,0x10
0066e090  MOV ECX,0x13
0066e095  MOVSD.REP ES:EDI,ESI
0066e097  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066e09d  CALL 0x005f53c0
0066e0a2  ADD EAX,0x8
0066e0a5  PUSH EAX
0066e0a6  MOV EAX,dword ptr [EBP + 0xfffffb2c]
0066e0ac  MOV ECX,dword ptr [EAX + 0x20c]
0066e0b2  MOV ECX,dword ptr [ECX + 0x20]
0066e0b5  CALL 0x00646380
0066e0ba  MOV EDX,dword ptr [EBP + 0xfffffb2c]
0066e0c0  MOV EAX,dword ptr [EDX]
0066e0c2  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066e0c8  MOV EDX,dword ptr [EAX + 0x54]
0066e0cb  CALL EDX
0066e0cd  ADD EAX,0x4a
0066e0d0  PUSH EAX
0066e0d1  MOV EAX,dword ptr [EBP + 0xfffffb2c]
0066e0d7  MOV EDX,dword ptr [EAX]
0066e0d9  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066e0df  MOV EAX,dword ptr [EDX + 0x4c]
0066e0e2  CALL EAX
0066e0e4  ADD EAX,0x77
0066e0e7  PUSH EAX
0066e0e8  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066e0ee  MOV EDX,dword ptr [ECX + 0x20c]
0066e0f4  MOV ECX,dword ptr [EDX + 0x20]
0066e0f7  CALL 0x00646150
0066e0fc  PUSH 0x1
0066e0fe  MOV EAX,dword ptr [EBP + 0xfffffb2c]
0066e104  MOV ECX,dword ptr [EAX + 0x20c]
0066e10a  MOV ECX,dword ptr [ECX + 0x20]
0066e10d  CALL 0x00646c20
0066e112  PUSH 0x178
0066e117  CALL 0x00686d82
0066e11c  ADD ESP,0x4
0066e11f  MOV dword ptr [EBP + 0xfffffb68],EAX
0066e125  MOV dword ptr [EBP + -0x4],0x6
0066e12c  CMP dword ptr [EBP + 0xfffffb68],0x0
0066e133  JZ 0x0066e148
0066e135  MOV ECX,dword ptr [EBP + 0xfffffb68]
0066e13b  CALL 0x005eaaf0
0066e140  MOV dword ptr [EBP + 0xfffffb0c],EAX
0066e146  JMP 0x0066e152
0066e148  MOV dword ptr [EBP + 0xfffffb0c],0x0
0066e152  MOV EDX,dword ptr [EBP + 0xfffffb0c]
0066e158  MOV dword ptr [EBP + 0xfffffb6c],EDX
0066e15e  MOV dword ptr [EBP + -0x4],0xffffffff
0066e165  MOV EAX,dword ptr [EBP + 0xfffffb2c]
0066e16b  MOV ECX,dword ptr [EBP + 0xfffffb6c]
0066e171  MOV dword ptr [EAX + 0x1f4],ECX
0066e177  PUSH -0x1
0066e179  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066e17f  CALL 0x005f53c0
0066e184  ADD EAX,0x6
0066e187  PUSH EAX
0066e188  MOV EDX,dword ptr [EBP + 0xfffffb2c]
0066e18e  MOV EAX,dword ptr [EDX]
0066e190  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066e196  MOV EDX,dword ptr [EAX + 0x54]
0066e199  CALL EDX
0066e19b  ADD EAX,0x4a
0066e19e  PUSH EAX
0066e19f  MOV EAX,dword ptr [EBP + 0xfffffb2c]
0066e1a5  MOV EDX,dword ptr [EAX]
0066e1a7  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066e1ad  MOV EAX,dword ptr [EDX + 0x4c]
0066e1b0  CALL EAX
0066e1b2  ADD EAX,0x77
0066e1b5  PUSH EAX
0066e1b6  MOV ECX,dword ptr [0x0162ee84]
0066e1bc  MOV EDX,dword ptr [ECX]
0066e1be  MOV ECX,dword ptr [0x0162ee84]
0066e1c4  MOV EAX,dword ptr [EDX + 0x230]
0066e1ca  CALL EAX
0066e1cc  PUSH EAX
0066e1cd  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066e1d3  MOV ECX,dword ptr [ECX + 0x1f4]
0066e1d9  CALL 0x005eae80
0066e1de  MOV EDX,dword ptr [EBP + 0xfffffb2c]
0066e1e4  MOV EAX,dword ptr [EDX + 0x1f4]
0066e1ea  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066e1f0  MOV ECX,dword ptr [ECX + 0x1f4]
0066e1f6  MOV EDX,dword ptr [EAX]
0066e1f8  MOV EAX,dword ptr [EDX + 0x70]
0066e1fb  CALL EAX
0066e1fd  MOV dword ptr [EBP + 0xfffffbe8],0x1
0066e207  JMP 0x0066e218
0066e209  MOV ECX,dword ptr [EBP + 0xfffffbe8]
0066e20f  ADD ECX,0x1
0066e212  MOV dword ptr [EBP + 0xfffffbe8],ECX
0066e218  CMP dword ptr [EBP + 0xfffffbe8],0xa
0066e21f  JGE 0x0066e56c
0066e225  PUSH 0x1d0
0066e22a  CALL 0x00686d82
0066e22f  ADD ESP,0x4
0066e232  MOV dword ptr [EBP + 0xfffffb60],EAX
0066e238  MOV dword ptr [EBP + -0x4],0x7
0066e23f  CMP dword ptr [EBP + 0xfffffb60],0x0
0066e246  JZ 0x0066e25b
0066e248  MOV ECX,dword ptr [EBP + 0xfffffb60]
0066e24e  CALL 0x005ec5a0
0066e253  MOV dword ptr [EBP + 0xfffffb08],EAX
0066e259  JMP 0x0066e265
0066e25b  MOV dword ptr [EBP + 0xfffffb08],0x0
0066e265  MOV EDX,dword ptr [EBP + 0xfffffb08]
0066e26b  MOV dword ptr [EBP + 0xfffffb64],EDX
0066e271  MOV dword ptr [EBP + -0x4],0xffffffff
0066e278  MOV EAX,dword ptr [EBP + 0xfffffbe8]
0066e27e  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066e284  MOV EDX,dword ptr [EBP + 0xfffffb64]
0066e28a  MOV dword ptr [ECX + EAX*0x4 + 0x178],EDX
0066e291  PUSH -0x1
0066e293  PUSH 0x11
0066e295  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066e29b  CALL 0x005f53c0
0066e2a0  ADD EAX,0x2
0066e2a3  PUSH EAX
0066e2a4  MOV ESI,dword ptr [EBP + 0xfffffbe8]
0066e2aa  SUB ESI,0x1
0066e2ad  IMUL ESI,ESI,0x18
0066e2b0  MOV EAX,dword ptr [EBP + 0xfffffb2c]
0066e2b6  MOV EDX,dword ptr [EAX]
0066e2b8  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066e2be  MOV EAX,dword ptr [EDX + 0x54]
0066e2c1  CALL EAX
0066e2c3  LEA ECX,[ESI + EAX*0x1 + 0xa2]
0066e2ca  PUSH ECX
0066e2cb  MOV EDX,dword ptr [EBP + 0xfffffb2c]
0066e2d1  MOV EAX,dword ptr [EDX]
0066e2d3  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066e2d9  MOV EDX,dword ptr [EAX + 0x4c]
0066e2dc  CALL EDX
0066e2de  ADD EAX,0xa6
0066e2e3  PUSH EAX
0066e2e4  PUSH 0x18
0066e2e6  PUSH 0x127
0066e2eb  PUSH 0x97
0066e2f0  PUSH 0x6b27f8
0066e2f5  MOV EAX,dword ptr [EBP + 0xfffffbe8]
0066e2fb  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066e301  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x178]
0066e308  CALL 0x005ec8f0
0066e30d  MOV EDX,dword ptr [EBP + 0xfffffbe8]
0066e313  MOV EAX,dword ptr [EBP + 0xfffffb2c]
0066e319  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x178]
0066e320  MOV EDX,dword ptr [EBP + 0xfffffbe8]
0066e326  MOV EAX,dword ptr [EBP + 0xfffffb2c]
0066e32c  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x178]
0066e333  MOV EAX,dword ptr [ECX]
0066e335  MOV ECX,EDX
0066e337  MOV EDX,dword ptr [EAX + 0x70]
0066e33a  CALL EDX
0066e33c  PUSH 0x1d0
0066e341  CALL 0x00686d82
0066e346  ADD ESP,0x4
0066e349  MOV dword ptr [EBP + 0xfffffb58],EAX
0066e34f  MOV dword ptr [EBP + -0x4],0x8
0066e356  CMP dword ptr [EBP + 0xfffffb58],0x0
0066e35d  JZ 0x0066e372
0066e35f  MOV ECX,dword ptr [EBP + 0xfffffb58]
0066e365  CALL 0x005ec5a0
0066e36a  MOV dword ptr [EBP + 0xfffffb04],EAX
0066e370  JMP 0x0066e37c
0066e372  MOV dword ptr [EBP + 0xfffffb04],0x0
0066e37c  MOV EAX,dword ptr [EBP + 0xfffffb04]
0066e382  MOV dword ptr [EBP + 0xfffffb5c],EAX
0066e388  MOV dword ptr [EBP + -0x4],0xffffffff
0066e38f  MOV ECX,dword ptr [EBP + 0xfffffbe8]
0066e395  MOV EDX,dword ptr [EBP + 0xfffffb2c]
0066e39b  MOV EAX,dword ptr [EBP + 0xfffffb5c]
0066e3a1  MOV dword ptr [EDX + ECX*0x4 + 0x1a0],EAX
0066e3a8  PUSH -0x1
0066e3aa  PUSH 0x12
0066e3ac  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066e3b2  CALL 0x005f53c0
0066e3b7  ADD EAX,0x2
0066e3ba  PUSH EAX
0066e3bb  MOV ESI,dword ptr [EBP + 0xfffffbe8]
0066e3c1  SUB ESI,0x1
0066e3c4  IMUL ESI,ESI,0x18
0066e3c7  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066e3cd  MOV EDX,dword ptr [ECX]
0066e3cf  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066e3d5  MOV EAX,dword ptr [EDX + 0x54]
0066e3d8  CALL EAX
0066e3da  LEA ECX,[ESI + EAX*0x1 + 0xa2]
0066e3e1  PUSH ECX
0066e3e2  MOV EDX,dword ptr [EBP + 0xfffffb2c]
0066e3e8  MOV EAX,dword ptr [EDX]
0066e3ea  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066e3f0  MOV EDX,dword ptr [EAX + 0x4c]
0066e3f3  CALL EDX
0066e3f5  ADD EAX,0xa6
0066e3fa  PUSH EAX
0066e3fb  PUSH 0x18
0066e3fd  PUSH 0x127
0066e402  PUSH 0x97
0066e407  PUSH 0x6b27f8
0066e40c  MOV EAX,dword ptr [EBP + 0xfffffbe8]
0066e412  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066e418  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x1a0]
0066e41f  CALL 0x005ec8f0
0066e424  MOV EDX,dword ptr [EBP + 0xfffffbe8]
0066e42a  MOV EAX,dword ptr [EBP + 0xfffffb2c]
0066e430  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x1a0]
0066e437  MOV EDX,dword ptr [EBP + 0xfffffbe8]
0066e43d  MOV EAX,dword ptr [EBP + 0xfffffb2c]
0066e443  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x1a0]
0066e44a  MOV EAX,dword ptr [ECX]
0066e44c  MOV ECX,EDX
0066e44e  MOV EDX,dword ptr [EAX + 0x70]
0066e451  CALL EDX
0066e453  PUSH 0x1d0
0066e458  CALL 0x00686d82
0066e45d  ADD ESP,0x4
0066e460  MOV dword ptr [EBP + 0xfffffb50],EAX
0066e466  MOV dword ptr [EBP + -0x4],0x9
0066e46d  CMP dword ptr [EBP + 0xfffffb50],0x0
0066e474  JZ 0x0066e489
0066e476  MOV ECX,dword ptr [EBP + 0xfffffb50]
0066e47c  CALL 0x005ec5a0
0066e481  MOV dword ptr [EBP + 0xfffffb00],EAX
0066e487  JMP 0x0066e493
0066e489  MOV dword ptr [EBP + 0xfffffb00],0x0
0066e493  MOV EAX,dword ptr [EBP + 0xfffffb00]
0066e499  MOV dword ptr [EBP + 0xfffffb54],EAX
0066e49f  MOV dword ptr [EBP + -0x4],0xffffffff
0066e4a6  MOV ECX,dword ptr [EBP + 0xfffffbe8]
0066e4ac  MOV EDX,dword ptr [EBP + 0xfffffb2c]
0066e4b2  MOV EAX,dword ptr [EBP + 0xfffffb54]
0066e4b8  MOV dword ptr [EDX + ECX*0x4 + 0x1c8],EAX
0066e4bf  PUSH -0x1
0066e4c1  PUSH 0x12
0066e4c3  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066e4c9  CALL 0x005f53c0
0066e4ce  ADD EAX,0x2
0066e4d1  PUSH EAX
0066e4d2  MOV ESI,dword ptr [EBP + 0xfffffbe8]
0066e4d8  SUB ESI,0x1
0066e4db  IMUL ESI,ESI,0x18
0066e4de  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066e4e4  MOV EDX,dword ptr [ECX]
0066e4e6  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066e4ec  MOV EAX,dword ptr [EDX + 0x54]
0066e4ef  CALL EAX
0066e4f1  LEA ECX,[ESI + EAX*0x1 + 0xa2]
0066e4f8  PUSH ECX
0066e4f9  MOV EDX,dword ptr [EBP + 0xfffffb2c]
0066e4ff  MOV EAX,dword ptr [EDX]
0066e501  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066e507  MOV EDX,dword ptr [EAX + 0x4c]
0066e50a  CALL EDX
0066e50c  ADD EAX,0x82
0066e511  PUSH EAX
0066e512  PUSH 0x18
0066e514  PUSH 0x19
0066e516  PUSH 0x97
0066e51b  PUSH 0x6b27f8
0066e520  MOV EAX,dword ptr [EBP + 0xfffffbe8]
0066e526  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066e52c  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x1c8]
0066e533  CALL 0x005ec8f0
0066e538  MOV EDX,dword ptr [EBP + 0xfffffbe8]
0066e53e  MOV EAX,dword ptr [EBP + 0xfffffb2c]
0066e544  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x1c8]
0066e54b  MOV EDX,dword ptr [EBP + 0xfffffbe8]
0066e551  MOV EAX,dword ptr [EBP + 0xfffffb2c]
0066e557  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x1c8]
0066e55e  MOV EAX,dword ptr [ECX]
0066e560  MOV ECX,EDX
0066e562  MOV EDX,dword ptr [EAX + 0x70]
0066e565  CALL EDX
0066e567  JMP 0x0066e209
0066e56c  MOV dword ptr [EBP + 0xfffffbe8],0x0
0066e576  JMP 0x0066e587
0066e578  MOV EAX,dword ptr [EBP + 0xfffffbe8]
0066e57e  ADD EAX,0x1
0066e581  MOV dword ptr [EBP + 0xfffffbe8],EAX
0066e587  CMP dword ptr [EBP + 0xfffffbe8],0xa
0066e58e  JGE 0x0066e79e
0066e594  MOV ECX,dword ptr [EBP + 0xfffffbe8]
0066e59a  MOV EDX,dword ptr [0x0162ee84]
0066e5a0  CMP dword ptr [EDX + ECX*0x4 + 0x64],0x0
0066e5a5  JL 0x0066e799
0066e5ab  PUSH ECX
0066e5ac  MOV EAX,ESP
0066e5ae  MOV CX,word ptr [0x0075ee1c]
0066e5b5  MOV word ptr [EAX],CX
0066e5b8  MOV DL,byte ptr [0x0075ee1e]
0066e5be  MOV byte ptr [EAX + 0x2],DL
0066e5c1  PUSH -0x1
0066e5c3  MOV EAX,dword ptr [EBP + 0xfffffbe8]
0066e5c9  MOV ECX,dword ptr [0x0162ee84]
0066e5cf  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x64]
0066e5d3  NEG EDX
0066e5d5  SBB EDX,EDX
0066e5d7  ADD EDX,0x9b
0066e5dd  PUSH EDX
0066e5de  MOV EAX,dword ptr [EBP + 0xfffffbe8]
0066e5e4  MOV ECX,dword ptr [0x0162ee84]
0066e5ea  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x64]
0066e5ee  MOV EAX,dword ptr [EBP + 0xfffffb2c]
0066e5f4  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x178]
0066e5fb  CALL 0x005ecd00
0066e600  MOV ECX,dword ptr [EBP + 0xfffffbe8]
0066e606  MOV EDX,dword ptr [0x0162ee84]
0066e60c  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x64]
0066e610  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066e616  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x178]
0066e61d  MOV EAX,dword ptr [EBP + 0xfffffbe8]
0066e623  MOV ECX,dword ptr [0x0162ee84]
0066e629  MOV EAX,dword ptr [ECX + EAX*0x4 + 0x64]
0066e62d  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066e633  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x178]
0066e63a  MOV EDX,dword ptr [EDX]
0066e63c  MOV EAX,dword ptr [EDX + 0x74]
0066e63f  CALL EAX
0066e641  PUSH ECX
0066e642  MOV ECX,ESP
0066e644  MOV DX,word ptr [0x0075ee1c]
0066e64b  MOV word ptr [ECX],DX
0066e64e  MOV AL,[0x0075ee1e]
0066e653  MOV byte ptr [ECX + 0x2],AL
0066e656  PUSH -0x1
0066e658  MOV ECX,dword ptr [EBP + 0xfffffbe8]
0066e65e  MOV EDX,dword ptr [0x0162ee84]
0066e664  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x64]
0066e668  NEG EAX
0066e66a  SBB EAX,EAX
0066e66c  ADD EAX,0x9b
0066e671  PUSH EAX
0066e672  MOV ECX,dword ptr [EBP + 0xfffffbe8]
0066e678  MOV EDX,dword ptr [0x0162ee84]
0066e67e  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x64]
0066e682  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066e688  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x1a0]
0066e68f  CALL 0x005ecd00
0066e694  MOV EDX,dword ptr [EBP + 0xfffffbe8]
0066e69a  MOV EAX,[0x0162ee84]
0066e69f  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x64]
0066e6a3  MOV EDX,dword ptr [EBP + 0xfffffb2c]
0066e6a9  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x1a0]
0066e6b0  MOV ECX,dword ptr [EBP + 0xfffffbe8]
0066e6b6  MOV EDX,dword ptr [0x0162ee84]
0066e6bc  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x64]
0066e6c0  MOV EDX,dword ptr [EBP + 0xfffffb2c]
0066e6c6  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x1a0]
0066e6cd  MOV EAX,dword ptr [EAX]
0066e6cf  MOV EDX,dword ptr [EAX + 0x74]
0066e6d2  CALL EDX
0066e6d4  MOV EAX,dword ptr [EBP + 0xfffffbe8]
0066e6da  MOV ECX,dword ptr [0x0162ee84]
0066e6e0  CMP dword ptr [ECX + EAX*0x4 + 0x64],0x0
0066e6e5  JZ 0x0066e766
0066e6e7  PUSH ECX
0066e6e8  MOV EDX,ESP
0066e6ea  MOV AX,[0x0075ee1c]
0066e6f0  MOV word ptr [EDX],AX
0066e6f3  MOV CL,byte ptr [0x0075ee1e]
0066e6f9  MOV byte ptr [EDX + 0x2],CL
0066e6fc  PUSH -0x1
0066e6fe  PUSH 0x9a
0066e703  MOV EDX,dword ptr [EBP + 0xfffffbe8]
0066e709  MOV EAX,[0x0162ee84]
0066e70e  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x64]
0066e712  MOV EDX,dword ptr [EBP + 0xfffffb2c]
0066e718  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x1c8]
0066e71f  CALL 0x005ecd00
0066e724  MOV EAX,dword ptr [EBP + 0xfffffbe8]
0066e72a  MOV ECX,dword ptr [0x0162ee84]
0066e730  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x64]
0066e734  MOV EAX,dword ptr [EBP + 0xfffffb2c]
0066e73a  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x1c8]
0066e741  MOV EDX,dword ptr [EBP + 0xfffffbe8]
0066e747  MOV EAX,[0x0162ee84]
0066e74c  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x64]
0066e750  MOV EAX,dword ptr [EBP + 0xfffffb2c]
0066e756  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x1c8]
0066e75d  MOV EAX,dword ptr [ECX]
0066e75f  MOV ECX,EDX
0066e761  MOV EDX,dword ptr [EAX + 0x74]
0066e764  CALL EDX
0066e766  MOV EAX,dword ptr [EBP + 0xfffffbe8]
0066e76c  MOV ECX,dword ptr [0x0162ee84]
0066e772  CMP dword ptr [ECX + EAX*0x4 + 0x64],0x0
0066e777  JNZ 0x0066e799
0066e779  PUSH 0xff
0066e77e  PUSH 0xd8
0066e783  PUSH 0x80
0066e788  MOV EDX,dword ptr [EBP + 0xfffffb2c]
0066e78e  MOV ECX,dword ptr [EDX + 0x1f0]
0066e794  CALL 0x005f6490
0066e799  JMP 0x0066e578
0066e79e  PUSH 0x1d0
0066e7a3  CALL 0x00686d82
0066e7a8  ADD ESP,0x4
0066e7ab  MOV dword ptr [EBP + 0xfffffb48],EAX
0066e7b1  MOV dword ptr [EBP + -0x4],0xa
0066e7b8  CMP dword ptr [EBP + 0xfffffb48],0x0
0066e7bf  JZ 0x0066e7d4
0066e7c1  MOV ECX,dword ptr [EBP + 0xfffffb48]
0066e7c7  CALL 0x005ec5a0
0066e7cc  MOV dword ptr [EBP + 0xfffffafc],EAX
0066e7d2  JMP 0x0066e7de
0066e7d4  MOV dword ptr [EBP + 0xfffffafc],0x0
0066e7de  MOV EAX,dword ptr [EBP + 0xfffffafc]
0066e7e4  MOV dword ptr [EBP + 0xfffffb4c],EAX
0066e7ea  MOV dword ptr [EBP + -0x4],0xffffffff
0066e7f1  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066e7f7  MOV EDX,dword ptr [EBP + 0xfffffb4c]
0066e7fd  MOV dword ptr [ECX + 0x204],EDX
0066e803  PUSH 0x6e0db8
0066e808  CALL 0x00630f40
0066e80d  ADD ESP,0x4
0066e810  PUSH EAX
0066e811  PUSH 0x6e0db4
0066e816  LEA EAX,[EBP + 0xfffffbac]
0066e81c  PUSH EAX
0066e81d  CALL dword ptr [0x006b2220]
0066e823  ADD ESP,0xc
0066e826  PUSH -0x1
0066e828  PUSH 0x12
0066e82a  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066e830  CALL 0x005f53c0
0066e835  ADD EAX,0x2
0066e838  PUSH EAX
0066e839  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066e83f  MOV EDX,dword ptr [ECX]
0066e841  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066e847  MOV EAX,dword ptr [EDX + 0x54]
0066e84a  CALL EAX
0066e84c  ADD EAX,0x17c
0066e851  PUSH EAX
0066e852  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066e858  MOV EDX,dword ptr [ECX]
0066e85a  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066e860  MOV EAX,dword ptr [EDX + 0x4c]
0066e863  CALL EAX
0066e865  ADD EAX,0x186
0066e86a  PUSH EAX
0066e86b  PUSH 0x14
0066e86d  PUSH 0xc8
0066e872  PUSH 0x8b
0066e877  LEA ECX,[EBP + 0xfffffbac]
0066e87d  PUSH ECX
0066e87e  MOV EDX,dword ptr [EBP + 0xfffffb2c]
0066e884  MOV ECX,dword ptr [EDX + 0x204]
0066e88a  CALL 0x005ec8f0
0066e88f  MOV EAX,dword ptr [EBP + 0xfffffb2c]
0066e895  MOV ECX,dword ptr [EAX + 0x204]
0066e89b  MOV EDX,dword ptr [EBP + 0xfffffb2c]
0066e8a1  MOV EAX,dword ptr [EDX + 0x204]
0066e8a7  MOV EDX,dword ptr [ECX]
0066e8a9  MOV ECX,EAX
0066e8ab  MOV EAX,dword ptr [EDX + 0x74]
0066e8ae  CALL EAX
0066e8b0  MOV ECX,dword ptr [EBP + 0xfffffba8]
0066e8b6  MOV EDX,dword ptr [ECX]
0066e8b8  MOV ECX,dword ptr [EBP + 0xfffffba8]
0066e8be  MOV EAX,dword ptr [EDX + 0xbc]
0066e8c4  CALL EAX
0066e8c6  MOV dword ptr [EBP + 0xfffffba4],EAX
0066e8cc  CMP dword ptr [EBP + 0xfffffba4],0x0
0066e8d3  JZ 0x0066e9c1
0066e8d9  PUSH 0x1d0
0066e8de  CALL 0x00686d82
0066e8e3  ADD ESP,0x4
0066e8e6  MOV dword ptr [EBP + 0xfffffb40],EAX
0066e8ec  MOV dword ptr [EBP + -0x4],0xb
0066e8f3  CMP dword ptr [EBP + 0xfffffb40],0x0
0066e8fa  JZ 0x0066e90f
0066e8fc  MOV ECX,dword ptr [EBP + 0xfffffb40]
0066e902  CALL 0x005ec5a0
0066e907  MOV dword ptr [EBP + 0xfffffaf8],EAX
0066e90d  JMP 0x0066e919
0066e90f  MOV dword ptr [EBP + 0xfffffaf8],0x0
0066e919  MOV ECX,dword ptr [EBP + 0xfffffaf8]
0066e91f  MOV dword ptr [EBP + 0xfffffb44],ECX
0066e925  MOV dword ptr [EBP + -0x4],0xffffffff
0066e92c  MOV EDX,dword ptr [EBP + 0xfffffb2c]
0066e932  MOV EAX,dword ptr [EBP + 0xfffffb44]
0066e938  MOV dword ptr [EDX + 0x208],EAX
0066e93e  PUSH -0x1
0066e940  PUSH 0x30
0066e942  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066e948  CALL 0x005f53c0
0066e94d  ADD EAX,0x5
0066e950  PUSH EAX
0066e951  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066e957  MOV EDX,dword ptr [ECX]
0066e959  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066e95f  MOV EAX,dword ptr [EDX + 0x54]
0066e962  CALL EAX
0066e964  ADD EAX,0x2e
0066e967  PUSH EAX
0066e968  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066e96e  MOV EDX,dword ptr [ECX]
0066e970  MOV ECX,dword ptr [EBP + 0xfffffb2c]
0066e976  MOV EAX,dword ptr [EDX + 0x4c]
0066e979  CALL EAX
0066e97b  PUSH EAX
0066e97c  PUSH 0x19
0066e97e  PUSH 0x257
0066e983  PUSH 0x8b
0066e988  MOV ECX,dword ptr [EBP + 0xfffffba4]
0066e98e  PUSH ECX
0066e98f  MOV EDX,dword ptr [EBP + 0xfffffb2c]
0066e995  MOV ECX,dword ptr [EDX + 0x208]
0066e99b  CALL 0x005ec8f0
0066e9a0  MOV EAX,dword ptr [EBP + 0xfffffb2c]
0066e9a6  MOV ECX,dword ptr [EAX + 0x208]
0066e9ac  MOV EDX,dword ptr [EBP + 0xfffffb2c]
0066e9b2  MOV EAX,dword ptr [EDX + 0x208]
0066e9b8  MOV EDX,dword ptr [ECX]
0066e9ba  MOV ECX,EAX
0066e9bc  MOV EAX,dword ptr [EDX + 0x70]
0066e9bf  CALL EAX
0066e9c1  MOV ECX,dword ptr [EBP + -0xc]
0066e9c4  MOV dword ptr FS:[0x0],ECX
0066e9cb  POP ECX
0066e9cc  POP EDI
0066e9cd  POP ESI
0066e9ce  MOV ECX,dword ptr [EBP + -0x10]
0066e9d1  XOR ECX,EBP
0066e9d3  CALL 0x00686d72
0066e9d8  MOV ESP,EBP
0066e9da  POP EBP
0066e9db  RET
