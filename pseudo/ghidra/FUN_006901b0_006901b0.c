// FUN_006901b0  006901b0

undefined4 __thiscall
FUN_006901b0(int param_1,undefined4 param_2,int *param_3,int *param_4,undefined4 param_5)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int SrcHeight;
  BITMAPINFO local_38;
  int local_c;
  void *local_8;
  
  local_c = 0xffffffff;
  local_38.bmiColors[0] = (RGBQUAD)(param_3[2] - *param_3);
  SrcHeight = param_3[3] - param_3[1];
  uVar2 = FUN_006135c0();
  if (((int)(uVar2 & 0xffff) < (int)local_38.bmiColors[0]) ||
     (uVar2 = FUN_006135e0(), (int)(uVar2 & 0xffff) < SrcHeight)) {
    return 0;
  }
  memset(&local_38,0,0x28);
  local_38.bmiHeader.biSize = 0x28;
  local_38.bmiHeader.biPlanes = 1;
  local_38.bmiHeader.biWidth = FUN_006238f0();
  sVar1 = FUN_00623930();
  local_38.bmiHeader.biBitCount = sVar1 << 3;
  iVar3 = FUN_006238b0();
  if (iVar3 < 0) {
    iVar3 = FUN_00623910();
    local_8 = (void *)FUN_006238d0(iVar3 + -1);
    local_38.bmiHeader.biHeight = FUN_00623910();
    local_c = StretchDIBits(*(HDC *)(param_1 + 0x18),*param_4,param_4[1],param_4[2] - *param_4,
                            param_4[3] - param_4[1],*param_3,
                            local_38.bmiHeader.biHeight - param_3[3],(int)local_38.bmiColors[0],
                            SrcHeight,local_8,&local_38,0,0xcc0020);
  }
  else {
    local_8 = (void *)FUN_006238d0(0);
    iVar3 = FUN_00623910();
    local_38.bmiHeader.biHeight = -iVar3;
    local_c = StretchDIBits(*(HDC *)(param_1 + 0x18),*param_4,param_4[1],param_4[2] - *param_4,
                            param_4[3] - param_4[1],*param_3,iVar3 - param_3[3],
                            (int)local_38.bmiColors[0],SrcHeight,local_8,&local_38,0,0xcc0020);
  }
  if (local_c == -1) {
    FUN_0068fb10("StretchDIBits Failed.");
    return 0;
  }
  if (local_c == 0) {
    uVar4 = FUN_006903a0(param_2,param_3,param_4,param_5);
    return uVar4;
  }
  return 1;
}

