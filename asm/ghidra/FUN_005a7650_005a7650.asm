; FUN_005a7650  005a7650
005a7650  PUSH EBP
005a7651  MOV EBP,ESP
005a7653  PUSH -0x1
005a7655  PUSH 0x6a7961
005a765a  MOV EAX,FS:[0x0]
005a7660  PUSH EAX
005a7661  SUB ESP,0x9c
005a7667  MOV EAX,[0x00781870]
005a766c  XOR EAX,EBP
005a766e  PUSH EAX
005a766f  LEA EAX,[EBP + -0xc]
005a7672  MOV FS:[0x0],EAX
005a7678  MOV dword ptr [EBP + 0xffffff78],ECX
005a767e  MOV dword ptr [EBP + -0x1c],0x1
005a7685  MOV dword ptr [EBP + -0x18],0x2
005a768c  MOV dword ptr [EBP + -0x14],0x0
005a7693  MOV dword ptr [EBP + -0x10],0x3
005a769a  MOV dword ptr [EBP + -0x3c],0x177
005a76a1  MOV dword ptr [EBP + -0x38],0x122
005a76a8  MOV dword ptr [EBP + -0x34],0x108
005a76af  MOV dword ptr [EBP + -0x30],0x12c
005a76b6  MOV dword ptr [EBP + -0x2c],0x1ef
005a76bd  MOV dword ptr [EBP + -0x28],0xf0
005a76c4  MOV dword ptr [EBP + -0x24],0x7e
005a76cb  MOV dword ptr [EBP + -0x20],0x115
005a76d2  PUSH 0x6cf8e8
005a76d7  CALL 0x00630f40
005a76dc  ADD ESP,0x4
005a76df  PUSH EAX
005a76e0  MOV ECX,dword ptr [0x0162ee84]
005a76e6  CALL 0x005f38b0
005a76eb  PUSH 0xfdec
005a76f0  MOV ECX,dword ptr [0x0162ee80]
005a76f6  CALL 0x005f1ad0
005a76fb  MOV dword ptr [EBP + -0x40],0x0
005a7702  JMP 0x005a770d
005a7704  MOV EAX,dword ptr [EBP + -0x40]
005a7707  ADD EAX,0x1
005a770a  MOV dword ptr [EBP + -0x40],EAX
005a770d  CMP dword ptr [EBP + -0x40],0x5
005a7711  JGE 0x005a7782
005a7713  PUSH 0x188
005a7718  CALL 0x00686d82
005a771d  ADD ESP,0x4
005a7720  MOV dword ptr [EBP + -0x4c],EAX
005a7723  MOV dword ptr [EBP + -0x4],0x0
005a772a  CMP dword ptr [EBP + -0x4c],0x0
005a772e  JZ 0x005a7740
005a7730  MOV ECX,dword ptr [EBP + -0x4c]
005a7733  CALL 0x005abfa0
005a7738  MOV dword ptr [EBP + 0xffffff74],EAX
005a773e  JMP 0x005a774a
005a7740  MOV dword ptr [EBP + 0xffffff74],0x0
005a774a  MOV ECX,dword ptr [EBP + 0xffffff74]
005a7750  MOV dword ptr [EBP + -0x48],ECX
005a7753  MOV dword ptr [EBP + -0x4],0xffffffff
005a775a  MOV EDX,dword ptr [EBP + -0x40]
005a775d  MOV EAX,dword ptr [EBP + 0xffffff78]
005a7763  MOV ECX,dword ptr [EBP + -0x48]
005a7766  MOV dword ptr [EAX + EDX*0x4 + 0x4],ECX
005a776a  MOV EDX,dword ptr [EBP + -0x40]
005a776d  PUSH EDX
005a776e  MOV EAX,dword ptr [EBP + -0x40]
005a7771  MOV ECX,dword ptr [EBP + 0xffffff78]
005a7777  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x4]
005a777b  CALL 0x005ac240
005a7780  JMP 0x005a7704
005a7782  MOV dword ptr [EBP + -0x44],0x0
005a7789  JMP 0x005a7794
005a778b  MOV EDX,dword ptr [EBP + -0x44]
005a778e  ADD EDX,0x1
005a7791  MOV dword ptr [EBP + -0x44],EDX
005a7794  CMP dword ptr [EBP + -0x44],0x4
005a7798  JGE 0x005a7a6a
005a779e  PUSH 0xcc4
005a77a3  CALL 0x00686d82
005a77a8  ADD ESP,0x4
005a77ab  MOV dword ptr [EBP + -0x54],EAX
005a77ae  MOV dword ptr [EBP + -0x4],0x1
005a77b5  CMP dword ptr [EBP + -0x54],0x0
005a77b9  JZ 0x005a77cb
005a77bb  MOV ECX,dword ptr [EBP + -0x54]
005a77be  CALL 0x005a8f40
005a77c3  MOV dword ptr [EBP + 0xffffff70],EAX
005a77c9  JMP 0x005a77d5
005a77cb  MOV dword ptr [EBP + 0xffffff70],0x0
005a77d5  MOV EAX,dword ptr [EBP + 0xffffff70]
005a77db  MOV dword ptr [EBP + -0x50],EAX
005a77de  MOV dword ptr [EBP + -0x4],0xffffffff
005a77e5  MOV ECX,dword ptr [EBP + -0x44]
005a77e8  MOV EDX,dword ptr [EBP + 0xffffff78]
005a77ee  MOV EAX,dword ptr [EBP + -0x50]
005a77f1  MOV dword ptr [EDX + ECX*0x4 + 0x18],EAX
005a77f5  MOV ECX,dword ptr [EBP + -0x44]
005a77f8  MOV EDX,dword ptr [EBP + 0xffffff78]
005a77fe  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x18]
005a7802  MOV dword ptr [EAX + 0xcc0],0x64
005a780c  PUSH -0x1
005a780e  PUSH 0x1
005a7810  PUSH 0x0
005a7812  PUSH 0x0
005a7814  PUSH 0x138e
005a7819  MOV ECX,dword ptr [EBP + -0x44]
005a781c  MOV EDX,dword ptr [EBP + 0xffffff78]
005a7822  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x18]
005a7826  CALL 0x005eae80
005a782b  MOV EAX,dword ptr [EBP + -0x44]
005a782e  MOV ECX,dword ptr [EBP + EAX*0x4 + -0x1c]
005a7832  PUSH ECX
005a7833  MOV EDX,dword ptr [EBP + -0x44]
005a7836  MOV EAX,dword ptr [EBP + 0xffffff78]
005a783c  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x18]
005a7840  MOV EDX,dword ptr [EBP + -0x44]
005a7843  MOV EAX,dword ptr [EBP + 0xffffff78]
005a7849  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x18]
005a784d  MOV EAX,dword ptr [ECX]
005a784f  MOV ECX,EDX
005a7851  MOV EDX,dword ptr [EAX + 0xb0]
005a7857  CALL EDX
005a7859  PUSH 0x0
005a785b  MOV EAX,dword ptr [EBP + -0x44]
005a785e  MOV ECX,dword ptr [EBP + 0xffffff78]
005a7864  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x18]
005a7868  CALL 0x005eb5d0
005a786d  MOV EDX,dword ptr [EBP + -0x44]
005a7870  MOV EAX,[0x00793604]
005a7875  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x580]
005a787c  PUSH ECX
005a787d  MOV EDX,dword ptr [EBP + -0x44]
005a7880  MOV EAX,dword ptr [EBP + 0xffffff78]
005a7886  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x18]
005a788a  CALL 0x005cc2c0
005a788f  MOV ECX,dword ptr [EBP + -0x44]
005a7892  MOV EDX,dword ptr [EBP + 0xffffff78]
005a7898  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x18]
005a789c  MOV ECX,dword ptr [EBP + -0x44]
005a789f  MOV EDX,dword ptr [EBP + 0xffffff78]
005a78a5  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x18]
005a78a9  MOV EAX,dword ptr [EAX]
005a78ab  MOV EDX,dword ptr [EAX + 0x74]
005a78ae  CALL EDX
005a78b0  PUSH 0xcc4
005a78b5  CALL 0x00686d82
005a78ba  ADD ESP,0x4
005a78bd  MOV dword ptr [EBP + -0x5c],EAX
005a78c0  MOV dword ptr [EBP + -0x4],0x2
005a78c7  CMP dword ptr [EBP + -0x5c],0x0
005a78cb  JZ 0x005a78dd
005a78cd  MOV ECX,dword ptr [EBP + -0x5c]
005a78d0  CALL 0x005a8f40
005a78d5  MOV dword ptr [EBP + 0xffffff6c],EAX
005a78db  JMP 0x005a78e7
005a78dd  MOV dword ptr [EBP + 0xffffff6c],0x0
005a78e7  MOV EAX,dword ptr [EBP + 0xffffff6c]
005a78ed  MOV dword ptr [EBP + -0x58],EAX
005a78f0  MOV dword ptr [EBP + -0x4],0xffffffff
005a78f7  MOV ECX,dword ptr [EBP + -0x44]
005a78fa  MOV EDX,dword ptr [EBP + 0xffffff78]
005a7900  MOV EAX,dword ptr [EBP + -0x58]
005a7903  MOV dword ptr [EDX + ECX*0x4 + 0x48],EAX
005a7907  MOV ECX,dword ptr [EBP + -0x44]
005a790a  MOV EDX,dword ptr [EBP + 0xffffff78]
005a7910  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x48]
005a7914  MOV dword ptr [EAX + 0xcc0],0x65
005a791e  PUSH -0x1
005a7920  PUSH 0x1
005a7922  PUSH 0x0
005a7924  PUSH 0x0
005a7926  PUSH 0x138e
005a792b  MOV ECX,dword ptr [EBP + -0x44]
005a792e  MOV EDX,dword ptr [EBP + 0xffffff78]
005a7934  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x48]
005a7938  CALL 0x005eae80
005a793d  MOV EAX,dword ptr [EBP + -0x44]
005a7940  MOV ECX,dword ptr [EBP + EAX*0x4 + -0x1c]
005a7944  PUSH ECX
005a7945  MOV EDX,dword ptr [EBP + -0x44]
005a7948  MOV EAX,dword ptr [EBP + 0xffffff78]
005a794e  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x48]
005a7952  MOV EDX,dword ptr [EBP + -0x44]
005a7955  MOV EAX,dword ptr [EBP + 0xffffff78]
005a795b  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x48]
005a795f  MOV EAX,dword ptr [ECX]
005a7961  MOV ECX,EDX
005a7963  MOV EDX,dword ptr [EAX + 0xb0]
005a7969  CALL EDX
005a796b  PUSH 0x0
005a796d  MOV EAX,dword ptr [EBP + -0x44]
005a7970  MOV ECX,dword ptr [EBP + 0xffffff78]
005a7976  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x48]
005a797a  CALL 0x005eb5d0
005a797f  MOV EDX,dword ptr [EBP + -0x44]
005a7982  MOV EAX,[0x00793604]
005a7987  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x634]
005a798e  PUSH ECX
005a798f  MOV EDX,dword ptr [EBP + -0x44]
005a7992  MOV EAX,dword ptr [EBP + 0xffffff78]
005a7998  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x48]
005a799c  CALL 0x005cc2c0
005a79a1  MOV ECX,dword ptr [EBP + -0x44]
005a79a4  MOV EDX,dword ptr [EBP + 0xffffff78]
005a79aa  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x48]
005a79ae  MOV ECX,dword ptr [EBP + -0x44]
005a79b1  MOV EDX,dword ptr [EBP + 0xffffff78]
005a79b7  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x48]
005a79bb  MOV EAX,dword ptr [EAX]
005a79bd  MOV EDX,dword ptr [EAX + 0x74]
005a79c0  CALL EDX
005a79c2  PUSH 0x178
005a79c7  CALL 0x00686d82
005a79cc  ADD ESP,0x4
005a79cf  MOV dword ptr [EBP + -0x64],EAX
005a79d2  MOV dword ptr [EBP + -0x4],0x3
005a79d9  CMP dword ptr [EBP + -0x64],0x0
005a79dd  JZ 0x005a79ef
005a79df  MOV ECX,dword ptr [EBP + -0x64]
005a79e2  CALL 0x005eaaf0
005a79e7  MOV dword ptr [EBP + 0xffffff68],EAX
005a79ed  JMP 0x005a79f9
005a79ef  MOV dword ptr [EBP + 0xffffff68],0x0
005a79f9  MOV EAX,dword ptr [EBP + 0xffffff68]
005a79ff  MOV dword ptr [EBP + -0x60],EAX
005a7a02  MOV dword ptr [EBP + -0x4],0xffffffff
005a7a09  MOV ECX,dword ptr [EBP + -0x44]
005a7a0c  MOV EDX,dword ptr [EBP + 0xffffff78]
005a7a12  MOV EAX,dword ptr [EBP + -0x60]
005a7a15  MOV dword ptr [EDX + ECX*0x4 + 0x58],EAX
005a7a19  PUSH -0x1
005a7a1b  PUSH 0x64
005a7a1d  MOV ECX,dword ptr [EBP + -0x44]
005a7a20  MOV EDX,dword ptr [EBP + ECX*0x8 + -0x38]
005a7a24  PUSH EDX
005a7a25  MOV EAX,dword ptr [EBP + -0x44]
005a7a28  MOV ECX,dword ptr [EBP + EAX*0x8 + -0x3c]
005a7a2c  PUSH ECX
005a7a2d  PUSH 0x311292
005a7a32  MOV EDX,dword ptr [EBP + -0x44]
005a7a35  MOV EAX,dword ptr [EBP + 0xffffff78]
005a7a3b  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x58]
005a7a3f  CALL 0x005eae80
005a7a44  MOV ECX,dword ptr [EBP + -0x44]
005a7a47  MOV EDX,dword ptr [EBP + 0xffffff78]
005a7a4d  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x58]
005a7a51  MOV ECX,dword ptr [EBP + -0x44]
005a7a54  MOV EDX,dword ptr [EBP + 0xffffff78]
005a7a5a  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x58]
005a7a5e  MOV EAX,dword ptr [EAX]
005a7a60  MOV EDX,dword ptr [EAX + 0x70]
005a7a63  CALL EDX
005a7a65  JMP 0x005a778b
005a7a6a  PUSH 0x9
005a7a6c  PUSH -0x4
005a7a6e  MOV EAX,dword ptr [EBP + 0xffffff78]
005a7a74  MOV ECX,dword ptr [EAX + 0x18]
005a7a77  MOV EDX,dword ptr [EBP + 0xffffff78]
005a7a7d  MOV EAX,dword ptr [EDX + 0x18]
005a7a80  MOV EDX,dword ptr [ECX]
005a7a82  MOV ECX,EAX
005a7a84  MOV EAX,dword ptr [EDX + 0x44]
005a7a87  CALL EAX
005a7a89  PUSH -0x20
005a7a8b  PUSH 0x19
005a7a8d  MOV ECX,dword ptr [EBP + 0xffffff78]
005a7a93  MOV EDX,dword ptr [ECX + 0x48]
005a7a96  MOV EAX,dword ptr [EBP + 0xffffff78]
005a7a9c  MOV ECX,dword ptr [EAX + 0x48]
005a7a9f  MOV EDX,dword ptr [EDX]
005a7aa1  MOV EAX,dword ptr [EDX + 0x44]
005a7aa4  CALL EAX
005a7aa6  PUSH 0xa
005a7aa8  PUSH 0x16
005a7aaa  MOV ECX,dword ptr [EBP + 0xffffff78]
005a7ab0  MOV EDX,dword ptr [ECX + 0x1c]
005a7ab3  MOV EAX,dword ptr [EBP + 0xffffff78]
005a7ab9  MOV ECX,dword ptr [EAX + 0x1c]
005a7abc  MOV EDX,dword ptr [EDX]
005a7abe  MOV EAX,dword ptr [EDX + 0x44]
005a7ac1  CALL EAX
005a7ac3  PUSH -0x12
005a7ac5  PUSH 0x43
005a7ac7  MOV ECX,dword ptr [EBP + 0xffffff78]
005a7acd  MOV EDX,dword ptr [ECX + 0x4c]
005a7ad0  MOV EAX,dword ptr [EBP + 0xffffff78]
005a7ad6  MOV ECX,dword ptr [EAX + 0x4c]
005a7ad9  MOV EDX,dword ptr [EDX]
005a7adb  MOV EAX,dword ptr [EDX + 0x44]
005a7ade  CALL EAX
005a7ae0  PUSH 0x21
005a7ae2  PUSH -0x7
005a7ae4  MOV ECX,dword ptr [EBP + 0xffffff78]
005a7aea  MOV EDX,dword ptr [ECX + 0x20]
005a7aed  MOV EAX,dword ptr [EBP + 0xffffff78]
005a7af3  MOV ECX,dword ptr [EAX + 0x20]
005a7af6  MOV EDX,dword ptr [EDX]
005a7af8  MOV EAX,dword ptr [EDX + 0x44]
005a7afb  CALL EAX
005a7afd  PUSH -0xd
005a7aff  PUSH 0x6
005a7b01  MOV ECX,dword ptr [EBP + 0xffffff78]
005a7b07  MOV EDX,dword ptr [ECX + 0x50]
005a7b0a  MOV EAX,dword ptr [EBP + 0xffffff78]
005a7b10  MOV ECX,dword ptr [EAX + 0x50]
005a7b13  MOV EDX,dword ptr [EDX]
005a7b15  MOV EAX,dword ptr [EDX + 0x44]
005a7b18  CALL EAX
005a7b1a  PUSH 0x27
005a7b1c  PUSH 0x14
005a7b1e  MOV ECX,dword ptr [EBP + 0xffffff78]
005a7b24  MOV EDX,dword ptr [ECX + 0x24]
005a7b27  MOV EAX,dword ptr [EBP + 0xffffff78]
005a7b2d  MOV ECX,dword ptr [EAX + 0x24]
005a7b30  MOV EDX,dword ptr [EDX]
005a7b32  MOV EAX,dword ptr [EDX + 0x44]
005a7b35  CALL EAX
005a7b37  PUSH 0x1e
005a7b39  PUSH 0x48
005a7b3b  MOV ECX,dword ptr [EBP + 0xffffff78]
005a7b41  MOV EDX,dword ptr [ECX + 0x54]
005a7b44  MOV EAX,dword ptr [EBP + 0xffffff78]
005a7b4a  MOV ECX,dword ptr [EAX + 0x54]
005a7b4d  MOV EDX,dword ptr [EDX]
005a7b4f  MOV EAX,dword ptr [EDX + 0x44]
005a7b52  CALL EAX
005a7b54  PUSH 0x198
005a7b59  CALL 0x00686d82
005a7b5e  ADD ESP,0x4
005a7b61  MOV dword ptr [EBP + -0x6c],EAX
005a7b64  MOV dword ptr [EBP + -0x4],0x4
005a7b6b  CMP dword ptr [EBP + -0x6c],0x0
005a7b6f  JZ 0x005a7b8d
005a7b71  MOV ECX,dword ptr [EBP + -0x6c]
005a7b74  CALL 0x005cd6a0
005a7b79  MOV ECX,dword ptr [EBP + -0x6c]
005a7b7c  MOV dword ptr [ECX],0x6cf824
005a7b82  MOV EDX,dword ptr [EBP + -0x6c]
005a7b85  MOV dword ptr [EBP + 0xffffff64],EDX
005a7b8b  JMP 0x005a7b97
005a7b8d  MOV dword ptr [EBP + 0xffffff64],0x0
005a7b97  MOV EAX,dword ptr [EBP + 0xffffff64]
005a7b9d  MOV dword ptr [EBP + -0x68],EAX
005a7ba0  MOV dword ptr [EBP + -0x4],0xffffffff
005a7ba7  MOV ECX,dword ptr [EBP + 0xffffff78]
005a7bad  MOV EDX,dword ptr [EBP + -0x68]
005a7bb0  MOV dword ptr [ECX + 0x2c],EDX
005a7bb3  PUSH -0x1
005a7bb5  PUSH 0x0
005a7bb7  PUSH 0x0
005a7bb9  PUSH 0x0
005a7bbb  PUSH 0x0
005a7bbd  MOV EAX,dword ptr [EBP + 0xffffff78]
005a7bc3  MOV ECX,dword ptr [EAX + 0x2c]
005a7bc6  CALL 0x005eae80
005a7bcb  PUSH 0x184
005a7bd0  CALL 0x00686d82
005a7bd5  ADD ESP,0x4
005a7bd8  MOV dword ptr [EBP + -0x74],EAX
005a7bdb  MOV dword ptr [EBP + -0x4],0x5
005a7be2  CMP dword ptr [EBP + -0x74],0x0
005a7be6  JZ 0x005a7bf8
005a7be8  MOV ECX,dword ptr [EBP + -0x74]
005a7beb  CALL 0x005f5bf0
005a7bf0  MOV dword ptr [EBP + 0xffffff60],EAX
005a7bf6  JMP 0x005a7c02
005a7bf8  MOV dword ptr [EBP + 0xffffff60],0x0
005a7c02  MOV ECX,dword ptr [EBP + 0xffffff60]
005a7c08  MOV dword ptr [EBP + -0x70],ECX
005a7c0b  MOV dword ptr [EBP + -0x4],0xffffffff
005a7c12  MOV EDX,dword ptr [EBP + 0xffffff78]
005a7c18  MOV EAX,dword ptr [EBP + -0x70]
005a7c1b  MOV dword ptr [EDX + 0x3c],EAX
005a7c1e  PUSH -0x1
005a7c20  PUSH 0x96
005a7c25  PUSH 0x0
005a7c27  PUSH 0x0
005a7c29  PUSH 0x13a2
005a7c2e  MOV ECX,dword ptr [EBP + 0xffffff78]
005a7c34  MOV ECX,dword ptr [ECX + 0x3c]
005a7c37  CALL 0x005eae80
005a7c3c  PUSH 0x184
005a7c41  CALL 0x00686d82
005a7c46  ADD ESP,0x4
005a7c49  MOV dword ptr [EBP + -0x7c],EAX
005a7c4c  MOV dword ptr [EBP + -0x4],0x6
005a7c53  CMP dword ptr [EBP + -0x7c],0x0
005a7c57  JZ 0x005a7c69
005a7c59  MOV ECX,dword ptr [EBP + -0x7c]
005a7c5c  CALL 0x005f5bf0
005a7c61  MOV dword ptr [EBP + 0xffffff5c],EAX
005a7c67  JMP 0x005a7c73
005a7c69  MOV dword ptr [EBP + 0xffffff5c],0x0
005a7c73  MOV EDX,dword ptr [EBP + 0xffffff5c]
005a7c79  MOV dword ptr [EBP + -0x78],EDX
005a7c7c  MOV dword ptr [EBP + -0x4],0xffffffff
005a7c83  MOV EAX,dword ptr [EBP + 0xffffff78]
005a7c89  MOV ECX,dword ptr [EBP + -0x78]
005a7c8c  MOV dword ptr [EAX + 0x40],ECX
005a7c8f  PUSH -0x1
005a7c91  PUSH 0x97
005a7c96  PUSH 0x0
005a7c98  PUSH 0x0
005a7c9a  PUSH 0x13a3
005a7c9f  MOV EDX,dword ptr [EBP + 0xffffff78]
005a7ca5  MOV ECX,dword ptr [EDX + 0x40]
005a7ca8  CALL 0x005eae80
005a7cad  PUSH 0x178
005a7cb2  CALL 0x00686d82
005a7cb7  ADD ESP,0x4
005a7cba  MOV dword ptr [EBP + 0xffffff7c],EAX
005a7cc0  MOV dword ptr [EBP + -0x4],0x7
005a7cc7  CMP dword ptr [EBP + 0xffffff7c],0x0
005a7cce  JZ 0x005a7ce3
005a7cd0  MOV ECX,dword ptr [EBP + 0xffffff7c]
005a7cd6  CALL 0x005eaaf0
005a7cdb  MOV dword ptr [EBP + 0xffffff58],EAX
005a7ce1  JMP 0x005a7ced
005a7ce3  MOV dword ptr [EBP + 0xffffff58],0x0
005a7ced  MOV EAX,dword ptr [EBP + 0xffffff58]
005a7cf3  MOV dword ptr [EBP + -0x80],EAX
005a7cf6  MOV dword ptr [EBP + -0x4],0xffffffff
005a7cfd  MOV ECX,dword ptr [EBP + 0xffffff78]
005a7d03  MOV EDX,dword ptr [EBP + -0x80]
005a7d06  MOV dword ptr [ECX + 0x44],EDX
005a7d09  PUSH -0x1
005a7d0b  PUSH 0xa
005a7d0d  PUSH 0x0
005a7d0f  PUSH 0x0
005a7d11  PUSH 0x13a1
005a7d16  MOV EAX,dword ptr [EBP + 0xffffff78]
005a7d1c  MOV ECX,dword ptr [EAX + 0x44]
005a7d1f  CALL 0x005eae80
005a7d24  MOV ECX,dword ptr [EBP + -0xc]
005a7d27  MOV dword ptr FS:[0x0],ECX
005a7d2e  POP ECX
005a7d2f  MOV ESP,EBP
005a7d31  POP EBP
005a7d32  RET
