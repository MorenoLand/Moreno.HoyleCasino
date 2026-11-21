// FUN_00623ab0  00623ab0

void FUN_00623ab0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  
  if ((((-1 < param_1) && (iVar2 = FUN_006238f0(), param_1 < iVar2)) && (-1 < param_2)) &&
     (iVar2 = FUN_00623910(), param_2 < iVar2)) {
    iVar2 = FUN_006238d0(param_2);
    iVar3 = FUN_00623930();
    puVar6 = (uint *)(iVar2 + iVar3 * param_1);
    uVar4 = FUN_00617b30(param_3);
    switch(param_4) {
    case 2:
      param_3 = 0xff000000;
    case 4:
      if (param_3._3_1_ != 0) {
        if (param_3._3_1_ == 0xff) {
          *puVar6 = uVar4;
        }
        else {
          uVar5 = (uint)param_3._3_1_;
          uVar1 = *puVar6;
          *puVar6 = (((int)(uVar1 & 0xff00) >> 8) -
                    ((int)((((int)(uVar1 & 0xff00) >> 8) - ((int)(uVar4 & 0xff00) >> 8)) * uVar5) >>
                    8)) * 0x100 |
                    (((int)uVar1 >> 0x10) -
                    ((int)((((int)(uVar1 & 0xff0000) >> 0x10) - ((int)(uVar4 & 0xff0000) >> 0x10)) *
                          uVar5) >> 8)) * 0x10000 |
                    (uVar1 & 0xff) - ((int)(((uVar1 & 0xff) - (uVar4 & 0xff)) * uVar5) >> 8);
        }
      }
      break;
    case 0x10:
      FUN_0061d520(puVar6,uVar4,param_3._3_1_);
      break;
    case 0x20:
      FUN_0061d6a0(puVar6,uVar4,param_3._3_1_);
    }
  }
  return;
}

