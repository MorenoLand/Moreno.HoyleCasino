; FUN_0060b7d0  0060b7d0
0060b7d0  PUSH EBP
0060b7d1  MOV EBP,ESP
0060b7d3  SUB ESP,0x82c
0060b7d9  MOV EAX,[0x00781870]
0060b7de  XOR EAX,EBP
0060b7e0  MOV dword ptr [EBP + -0x4],EAX
0060b7e3  PUSH ESI
0060b7e4  MOV dword ptr [EBP + 0xfffff7d8],ECX
0060b7ea  MOV EAX,dword ptr [EBP + 0x8]
0060b7ed  MOVSX ECX,byte ptr [EAX + 0x14]
0060b7f1  MOV dword ptr [EBP + 0xfffff7d4],ECX
0060b7f7  MOV EDX,dword ptr [EBP + 0xfffff7d4]
0060b7fd  SUB EDX,0x1
0060b800  MOV dword ptr [EBP + 0xfffff7d4],EDX
0060b806  CMP dword ptr [EBP + 0xfffff7d4],0x1a
0060b80d  JA 0x0060bba5
0060b813  MOV EAX,dword ptr [EBP + 0xfffff7d4]
0060b819  MOVZX ECX,byte ptr [EAX + 0x60bdfc]
0060b820  JMP dword ptr [ECX*0x4 + 0x60bdcc]
0060b827  MOV EDX,dword ptr [EBP + 0xfffff7d8]
0060b82d  MOV EAX,dword ptr [EDX]
0060b82f  MOV ECX,dword ptr [EBP + 0xfffff7d8]
0060b835  MOV EDX,dword ptr [EAX + 0xb8]
0060b83b  CALL EDX
0060b83d  PUSH EAX
0060b83e  CALL 0x00686ecc
0060b843  ADD ESP,0x4
0060b846  MOV ECX,dword ptr [EBP + 0xfffff7d8]
0060b84c  MOV dword ptr [ECX + 0xa0],EAX
0060b852  MOV EDX,dword ptr [EBP + 0xfffff7d8]
0060b858  MOV EAX,dword ptr [EDX]
0060b85a  MOV ECX,dword ptr [EBP + 0xfffff7d8]
0060b860  MOV EDX,dword ptr [EAX + 0xac]
0060b866  CALL EDX
0060b868  JMP 0x0060bdb4
0060b86d  MOV EAX,dword ptr [EBP + 0xfffff7d8]
0060b873  MOV dword ptr [EAX + 0xa0],0x0
0060b87d  MOV ECX,dword ptr [EBP + 0xfffff7d8]
0060b883  MOV EDX,dword ptr [ECX]
0060b885  MOV ECX,dword ptr [EBP + 0xfffff7d8]
0060b88b  MOV EAX,dword ptr [EDX + 0xac]
0060b891  CALL EAX
0060b893  JMP 0x0060bdb4
0060b898  JMP 0x0060bdbb
0060b89d  MOV ECX,dword ptr [EBP + 0xfffff7d8]
0060b8a3  CMP dword ptr [ECX + 0xa0],0x0
0060b8aa  JLE 0x0060b8c7
0060b8ac  MOV ECX,dword ptr [EBP + 0xfffff7d8]
0060b8b2  MOV EDX,dword ptr [ECX + 0xa0]
0060b8b8  SUB EDX,0x1
0060b8bb  MOV EAX,dword ptr [EBP + 0xfffff7d8]
0060b8c1  MOV dword ptr [EAX + 0xa0],EDX
0060b8c7  MOV ECX,dword ptr [EBP + 0xfffff7d8]
0060b8cd  MOV EDX,dword ptr [ECX]
0060b8cf  MOV ECX,dword ptr [EBP + 0xfffff7d8]
0060b8d5  MOV EAX,dword ptr [EDX + 0xac]
0060b8db  CALL EAX
0060b8dd  JMP 0x0060bdb4
0060b8e2  MOV ECX,dword ptr [EBP + 0xfffff7d8]
0060b8e8  MOV EDX,dword ptr [ECX]
0060b8ea  MOV ECX,dword ptr [EBP + 0xfffff7d8]
0060b8f0  MOV EAX,dword ptr [EDX + 0xb8]
0060b8f6  CALL EAX
0060b8f8  PUSH EAX
0060b8f9  CALL 0x00686ecc
0060b8fe  ADD ESP,0x4
0060b901  MOV ECX,dword ptr [EBP + 0xfffff7d8]
0060b907  CMP dword ptr [ECX + 0xa0],EAX
0060b90d  JGE 0x0060b92a
0060b90f  MOV ECX,dword ptr [EBP + 0xfffff7d8]
0060b915  MOV EDX,dword ptr [ECX + 0xa0]
0060b91b  ADD EDX,0x1
0060b91e  MOV EAX,dword ptr [EBP + 0xfffff7d8]
0060b924  MOV dword ptr [EAX + 0xa0],EDX
0060b92a  MOV ECX,dword ptr [EBP + 0xfffff7d8]
0060b930  MOV EDX,dword ptr [ECX]
0060b932  MOV ECX,dword ptr [EBP + 0xfffff7d8]
0060b938  MOV EAX,dword ptr [EDX + 0xac]
0060b93e  CALL EAX
0060b940  JMP 0x0060bdb4
0060b945  MOV ECX,dword ptr [EBP + 0xfffff7d8]
0060b94b  MOVZX EDX,byte ptr [ECX + 0xa4]
0060b952  TEST EDX,EDX
0060b954  JNZ 0x0060b979
0060b956  MOV EAX,dword ptr [EBP + 0xfffff7d8]
0060b95c  MOV byte ptr [EAX + 0xa4],0x1
0060b963  MOV ECX,dword ptr [EBP + 0xfffff7d8]
0060b969  MOV EDX,dword ptr [ECX]
0060b96b  MOV ECX,dword ptr [EBP + 0xfffff7d8]
0060b971  MOV EAX,dword ptr [EDX + 0xac]
0060b977  CALL EAX
0060b979  JMP 0x0060bdb4
0060b97e  MOV ECX,dword ptr [EBP + 0xfffff7d8]
0060b984  MOVZX EDX,byte ptr [ECX + 0xa5]
0060b98b  TEST EDX,EDX
0060b98d  JNZ 0x0060b9b2
0060b98f  MOV EAX,dword ptr [EBP + 0xfffff7d8]
0060b995  MOV byte ptr [EAX + 0xa5],0x1
0060b99c  MOV ECX,dword ptr [EBP + 0xfffff7d8]
0060b9a2  MOV EDX,dword ptr [ECX]
0060b9a4  MOV ECX,dword ptr [EBP + 0xfffff7d8]
0060b9aa  MOV EAX,dword ptr [EDX + 0xac]
0060b9b0  CALL EAX
0060b9b2  JMP 0x0060bdb4
0060b9b7  MOV ECX,dword ptr [EBP + 0xfffff7d8]
0060b9bd  MOV EDX,dword ptr [ECX]
0060b9bf  MOV ECX,dword ptr [EBP + 0xfffff7d8]
0060b9c5  MOV EAX,dword ptr [EDX + 0xb8]
0060b9cb  CALL EAX
0060b9cd  MOV dword ptr [EBP + 0xfffff7ec],EAX
0060b9d3  MOV ECX,dword ptr [EBP + 0xfffff7ec]
0060b9d9  PUSH ECX
0060b9da  CALL 0x00686ecc
0060b9df  ADD ESP,0x4
0060b9e2  TEST EAX,EAX
0060b9e4  JZ 0x0060ba8e
0060b9ea  MOV EDX,dword ptr [EBP + 0xfffff7ec]
0060b9f0  PUSH EDX
0060b9f1  CALL 0x00686ecc
0060b9f6  ADD ESP,0x4
0060b9f9  MOV ECX,dword ptr [EBP + 0xfffff7d8]
0060b9ff  CMP dword ptr [ECX + 0xa0],EAX
0060ba05  JZ 0x0060ba8e
0060ba0b  MOV EDX,dword ptr [EBP + 0xfffff7ec]
0060ba11  PUSH EDX
0060ba12  LEA EAX,[EBP + 0xfffff7f0]
0060ba18  PUSH EAX
0060ba19  CALL 0x00686d8e
0060ba1e  ADD ESP,0x8
0060ba21  MOV ECX,dword ptr [EBP + 0xfffff7d8]
0060ba27  MOV EDX,dword ptr [ECX + 0xa0]
0060ba2d  LEA EAX,[EBP + EDX*0x1 + 0xfffff7f1]
0060ba34  PUSH EAX
0060ba35  CALL 0x00686ecc
0060ba3a  ADD ESP,0x4
0060ba3d  ADD EAX,0x1
0060ba40  PUSH EAX
0060ba41  MOV ECX,dword ptr [EBP + 0xfffff7d8]
0060ba47  MOV EDX,dword ptr [ECX + 0xa0]
0060ba4d  LEA EAX,[EBP + EDX*0x1 + 0xfffff7f1]
0060ba54  PUSH EAX
0060ba55  MOV ECX,dword ptr [EBP + 0xfffff7d8]
0060ba5b  MOV EDX,dword ptr [ECX + 0xa0]
0060ba61  LEA EAX,[EBP + EDX*0x1 + 0xfffff7f0]
0060ba68  PUSH EAX
0060ba69  CALL 0x00686fde
0060ba6e  ADD ESP,0xc
0060ba71  LEA ECX,[EBP + 0xfffff7f0]
0060ba77  PUSH ECX
0060ba78  MOV EDX,dword ptr [EBP + 0xfffff7d8]
0060ba7e  MOV EAX,dword ptr [EDX]
0060ba80  MOV ECX,dword ptr [EBP + 0xfffff7d8]
0060ba86  MOV EDX,dword ptr [EAX + 0xb4]
0060ba8c  CALL EDX
0060ba8e  JMP 0x0060bdb4
0060ba93  MOV EAX,dword ptr [EBP + 0xfffff7d8]
0060ba99  MOV EDX,dword ptr [EAX]
0060ba9b  MOV ECX,dword ptr [EBP + 0xfffff7d8]
0060baa1  MOV EAX,dword ptr [EDX + 0xb8]
0060baa7  CALL EAX
0060baa9  MOV dword ptr [EBP + 0xfffff7ec],EAX
0060baaf  MOV ECX,dword ptr [EBP + 0xfffff7ec]
0060bab5  PUSH ECX
0060bab6  CALL 0x00686ecc
0060babb  ADD ESP,0x4
0060babe  TEST EAX,EAX
0060bac0  JBE 0x0060bb96
0060bac6  MOV EDX,dword ptr [EBP + 0xfffff7d8]
0060bacc  CMP dword ptr [EDX + 0xa0],0x0
0060bad3  JLE 0x0060bb96
0060bad9  MOV EAX,dword ptr [EBP + 0xfffff7d8]
0060badf  MOV EDX,dword ptr [EAX]
0060bae1  MOV ECX,dword ptr [EBP + 0xfffff7d8]
0060bae7  MOV EAX,dword ptr [EDX + 0xb8]
0060baed  CALL EAX
0060baef  PUSH EAX
0060baf0  LEA ECX,[EBP + 0xfffff7f0]
0060baf6  PUSH ECX
0060baf7  CALL 0x00686d8e
0060bafc  ADD ESP,0x8
0060baff  MOV EDX,dword ptr [EBP + 0xfffff7d8]
0060bb05  MOV EAX,dword ptr [EDX + 0xa0]
0060bb0b  LEA ECX,[EBP + EAX*0x1 + 0xfffff7f0]
0060bb12  PUSH ECX
0060bb13  CALL 0x00686ecc
0060bb18  ADD ESP,0x4
0060bb1b  ADD EAX,0x1
0060bb1e  PUSH EAX
0060bb1f  MOV EDX,dword ptr [EBP + 0xfffff7d8]
0060bb25  MOV EAX,dword ptr [EDX + 0xa0]
0060bb2b  LEA ECX,[EBP + EAX*0x1 + 0xfffff7f0]
0060bb32  PUSH ECX
0060bb33  MOV EDX,dword ptr [EBP + 0xfffff7d8]
0060bb39  MOV EAX,dword ptr [EDX + 0xa0]
0060bb3f  LEA ECX,[EBP + EAX*0x1 + 0xfffff7ef]
0060bb46  PUSH ECX
0060bb47  CALL 0x00686fde
0060bb4c  ADD ESP,0xc
0060bb4f  MOV EDX,dword ptr [EBP + 0xfffff7d8]
0060bb55  CMP dword ptr [EDX + 0xa0],0x0
0060bb5c  JLE 0x0060bb79
0060bb5e  MOV EAX,dword ptr [EBP + 0xfffff7d8]
0060bb64  MOV ECX,dword ptr [EAX + 0xa0]
0060bb6a  SUB ECX,0x1
0060bb6d  MOV EDX,dword ptr [EBP + 0xfffff7d8]
0060bb73  MOV dword ptr [EDX + 0xa0],ECX
0060bb79  LEA EAX,[EBP + 0xfffff7f0]
0060bb7f  PUSH EAX
0060bb80  MOV ECX,dword ptr [EBP + 0xfffff7d8]
0060bb86  MOV EDX,dword ptr [ECX]
0060bb88  MOV ECX,dword ptr [EBP + 0xfffff7d8]
0060bb8e  MOV EAX,dword ptr [EDX + 0xb4]
0060bb94  CALL EAX
0060bb96  JMP 0x0060bdb4
0060bb9b  JMP 0x0060bdbb
0060bba0  JMP 0x0060bdbb
0060bba5  MOV ECX,dword ptr [EBP + 0xfffff7d8]
0060bbab  CMP dword ptr [ECX + 0x1d4],0x0
0060bbb2  JG 0x0060bbcb
0060bbb4  PUSH 0x88
0060bbb9  PUSH 0x6d825c
0060bbbe  PUSH 0x6d8248
0060bbc3  CALL 0x005e9f20
0060bbc8  ADD ESP,0xc
0060bbcb  MOV EAX,dword ptr [EBP + 0xfffff7d8]
0060bbd1  MOV EDX,dword ptr [EAX]
0060bbd3  MOV ECX,dword ptr [EBP + 0xfffff7d8]
0060bbd9  MOV EAX,dword ptr [EDX + 0xb8]
0060bbdf  CALL EAX
0060bbe1  MOV dword ptr [EBP + 0xfffff7ec],EAX
0060bbe7  MOV ECX,dword ptr [EBP + 0xfffff7ec]
0060bbed  PUSH ECX
0060bbee  CALL 0x00686ecc
0060bbf3  ADD ESP,0x4
0060bbf6  CMP EAX,0x7ff
0060bbfb  JNC 0x0060bdb4
0060bc01  MOV EDX,dword ptr [EBP + 0xfffff7ec]
0060bc07  PUSH EDX
0060bc08  CALL 0x00686ecc
0060bc0d  ADD ESP,0x4
0060bc10  MOV ECX,dword ptr [EBP + 0xfffff7d8]
0060bc16  CMP EAX,dword ptr [ECX + 0x1d4]
0060bc1c  JNC 0x0060bdb4
0060bc22  MOV EDX,dword ptr [EBP + 0xfffff7d8]
0060bc28  CMP dword ptr [EDX + 0x1d8],0x0
0060bc2f  JZ 0x0060bc66
0060bc31  MOV ECX,dword ptr [EBP + 0xfffff7d8]
0060bc37  CALL 0x005ef050
0060bc3c  MOV ESI,EAX
0060bc3e  PUSH -0x1
0060bc40  MOV EAX,dword ptr [EBP + 0x8]
0060bc43  MOV CL,byte ptr [EAX + 0x14]
0060bc46  PUSH ECX
0060bc47  MOV ECX,dword ptr [EBP + 0xfffff7d8]
0060bc4d  CALL 0x005ee950
0060bc52  ADD ESI,EAX
0060bc54  MOV EDX,dword ptr [EBP + 0xfffff7d8]
0060bc5a  CMP ESI,dword ptr [EDX + 0x1d8]
0060bc60  JG 0x0060bdb4
0060bc66  MOV EAX,dword ptr [EBP + 0xfffff7ec]
0060bc6c  PUSH EAX
0060bc6d  LEA ECX,[EBP + 0xfffff7f0]
0060bc73  PUSH ECX
0060bc74  CALL 0x00686d8e
0060bc79  ADD ESP,0x8
0060bc7c  CMP dword ptr [0x00795f90],0x3
0060bc83  JZ 0x0060bcf3
0060bc85  MOV EDX,dword ptr [EBP + 0xfffff7d8]
0060bc8b  MOV EAX,dword ptr [EDX + 0xa0]
0060bc91  LEA ECX,[EBP + EAX*0x1 + 0xfffff7f0]
0060bc98  PUSH ECX
0060bc99  CALL 0x00686ecc
0060bc9e  ADD ESP,0x4
0060bca1  ADD EAX,0x1
0060bca4  PUSH EAX
0060bca5  MOV EDX,dword ptr [EBP + 0xfffff7d8]
0060bcab  MOV EAX,dword ptr [EDX + 0xa0]
0060bcb1  LEA ECX,[EBP + EAX*0x1 + 0xfffff7f0]
0060bcb8  PUSH ECX
0060bcb9  MOV EDX,dword ptr [EBP + 0xfffff7d8]
0060bcbf  MOV EAX,dword ptr [EDX + 0xa0]
0060bcc5  LEA ECX,[EBP + EAX*0x1 + 0xfffff7f1]
0060bccc  PUSH ECX
0060bccd  CALL 0x00686fde
0060bcd2  ADD ESP,0xc
0060bcd5  MOV EDX,dword ptr [EBP + 0xfffff7d8]
0060bcdb  MOV EAX,dword ptr [EDX + 0xa0]
0060bce1  MOV ECX,dword ptr [EBP + 0x8]
0060bce4  MOV DL,byte ptr [ECX + 0x14]
0060bce7  MOV byte ptr [EBP + EAX*0x1 + 0xfffff7f0],DL
0060bcee  JMP 0x0060bd7c
0060bcf3  MOV EAX,dword ptr [EBP + 0x8]
0060bcf6  MOV CL,byte ptr [EAX + 0x14]
0060bcf9  MOV byte ptr [EBP + 0xfffff7df],CL
0060bcff  LEA EDX,[EBP + 0xfffff7f0]
0060bd05  PUSH EDX
0060bd06  CALL 0x00686ecc
0060bd0b  ADD ESP,0x4
0060bd0e  MOV dword ptr [EBP + 0xfffff7e0],EAX
0060bd14  MOV EAX,dword ptr [EBP + 0xfffff7d8]
0060bd1a  MOV ECX,dword ptr [EAX + 0xa0]
0060bd20  MOV dword ptr [EBP + 0xfffff7e4],ECX
0060bd26  JMP 0x0060bd37
0060bd28  MOV EDX,dword ptr [EBP + 0xfffff7e4]
0060bd2e  ADD EDX,0x1
0060bd31  MOV dword ptr [EBP + 0xfffff7e4],EDX
0060bd37  MOV EAX,dword ptr [EBP + 0xfffff7e0]
0060bd3d  ADD EAX,0x1
0060bd40  CMP dword ptr [EBP + 0xfffff7e4],EAX
0060bd46  JG 0x0060bd7c
0060bd48  MOV ECX,dword ptr [EBP + 0xfffff7e4]
0060bd4e  MOV DL,byte ptr [EBP + ECX*0x1 + 0xfffff7f0]
0060bd55  MOV byte ptr [EBP + 0xfffff7eb],DL
0060bd5b  MOV EAX,dword ptr [EBP + 0xfffff7e4]
0060bd61  MOV CL,byte ptr [EBP + 0xfffff7df]
0060bd67  MOV byte ptr [EBP + EAX*0x1 + 0xfffff7f0],CL
0060bd6e  MOV DL,byte ptr [EBP + 0xfffff7eb]
0060bd74  MOV byte ptr [EBP + 0xfffff7df],DL
0060bd7a  JMP 0x0060bd28
0060bd7c  MOV EAX,dword ptr [EBP + 0xfffff7d8]
0060bd82  MOV ECX,dword ptr [EAX + 0xa0]
0060bd88  ADD ECX,0x1
0060bd8b  MOV EDX,dword ptr [EBP + 0xfffff7d8]
0060bd91  MOV dword ptr [EDX + 0xa0],ECX
0060bd97  LEA EAX,[EBP + 0xfffff7f0]
0060bd9d  PUSH EAX
0060bd9e  MOV ECX,dword ptr [EBP + 0xfffff7d8]
0060bda4  MOV EDX,dword ptr [ECX]
0060bda6  MOV ECX,dword ptr [EBP + 0xfffff7d8]
0060bdac  MOV EAX,dword ptr [EDX + 0xb4]
0060bdb2  CALL EAX
0060bdb4  MOV ECX,dword ptr [EBP + 0x8]
0060bdb7  MOV byte ptr [ECX + 0x4],0x1
0060bdbb  POP ESI
0060bdbc  MOV ECX,dword ptr [EBP + -0x4]
0060bdbf  XOR ECX,EBP
0060bdc1  CALL 0x00686d72
0060bdc6  MOV ESP,EBP
0060bdc8  POP EBP
0060bdc9  RET 0x4
