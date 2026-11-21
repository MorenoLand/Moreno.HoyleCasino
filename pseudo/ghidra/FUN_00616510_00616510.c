// FUN_00616510  00616510

void __thiscall
FUN_00616510(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6,
            int param_7,int param_8,int param_9,int param_10,int param_11,int param_12,int param_13,
            int param_14,char param_15)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_6c;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  code *local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  undefined4 *local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (*(int *)(param_1 + 0x164) != 0) {
    iVar2 = FUN_00616450(param_2,param_3);
    local_30 = FUN_00616410(param_2,param_3);
    local_38 = 0;
    local_34 = 0;
    local_2c = iVar2;
    iVar2 = FUN_00623910();
    local_20 = FUN_006238f0();
    local_28 = 0;
    local_24 = 0;
    local_60 = 0;
    local_5c = 0;
    local_58 = 0;
    local_54 = 0;
    if (1 < param_14) {
      local_50 = param_5;
      local_4c = param_6;
      local_48 = param_7;
      local_44 = param_8;
      local_60 = param_9;
      local_5c = param_10;
      local_58 = param_11;
      local_54 = param_12;
      if (1 < param_14) {
        param_7 = (param_7 - param_5) * param_14 + param_5;
        param_8 = (param_8 - param_6) * param_14 + param_6;
        param_11 = (param_11 - param_9) * param_14 + param_9;
        param_12 = (param_12 - param_10) * param_14 + param_10;
        local_30 = (local_30 - local_38) * param_14 + local_38;
        local_2c = (local_2c - local_34) * param_14 + local_34;
      }
    }
    local_1c = iVar2;
    cVar1 = FUN_00624a70(&param_5,&local_28,&param_9,&local_38);
    if (cVar1 != '\0') {
      if (1 < param_14) {
        FUN_005ec4a0(&param_5,&local_50,param_14,0);
        FUN_005ec4a0(&param_9,&local_60,param_14,1);
        iVar2 = param_8 - param_6;
        iVar4 = param_7 - param_5;
        if (local_1c < iVar2 * param_14 + param_6) {
          param_8 = param_8 - ((iVar2 * param_14 + param_6) - local_1c);
          param_12 = param_12 - ((iVar2 * param_14 + param_6) - local_1c);
        }
        if (local_20 < iVar4 * param_14 + param_5) {
          param_7 = param_7 - (uint)(local_20 < iVar4 * param_14 + param_5);
          param_11 = param_11 - (uint)(local_20 < iVar4 * param_14 + param_5);
        }
      }
      iVar2 = FUN_00623910();
      if (iVar2 <= param_6) {
        FUN_005e9f20("destRect.top < frameBuffer->GetHeight()","..\\scilib\\platform\\tsprite.cpp",
                     0xcb);
      }
      iVar2 = FUN_006238f0();
      if (iVar2 <= param_5) {
        FUN_005e9f20("destRect.left < frameBuffer->GetWidth()","..\\scilib\\platform\\tsprite.cpp",
                     0xcc);
      }
      iVar2 = FUN_00623910();
      if (iVar2 < param_8) {
        FUN_005e9f20("destRect.bottom <= frameBuffer->GetHeight()",
                     "..\\scilib\\platform\\tsprite.cpp",0xcd);
      }
      iVar2 = FUN_006238f0();
      if (iVar2 < param_7) {
        FUN_005e9f20("destRect.right <= frameBuffer->GetWidth()","..\\scilib\\platform\\tsprite.cpp"
                     ,0xce);
      }
      iVar2 = FUN_00616450(param_2,param_3);
      if (iVar2 <= param_10) {
        FUN_005e9f20("sourceRect.top < GetHeight(loop, cel)","..\\scilib\\platform\\tsprite.cpp",
                     0xcf);
      }
      iVar2 = FUN_00616410(param_2,param_3);
      if (iVar2 <= param_9) {
        FUN_005e9f20("sourceRect.left < GetWidth(loop, cel)","..\\scilib\\platform\\tsprite.cpp",
                     0xd0);
      }
      iVar2 = FUN_00616450(param_2,param_3);
      if (iVar2 < param_12) {
        FUN_005e9f20("sourceRect.bottom <= GetHeight(loop, cel)","..\\scilib\\platform\\tsprite.cpp"
                     ,0xd1);
      }
      iVar2 = FUN_00616410(param_2,param_3);
      if (iVar2 < param_11) {
        FUN_005e9f20("sourceRect.right <= GetWidth(loop, cel)","..\\scilib\\platform\\tsprite.cpp",
                     0xd2);
      }
      iVar2 = param_7;
      if (1 < param_14) {
        iVar3 = FUN_006238f0();
        iVar4 = param_8;
        if (iVar3 < iVar2) {
          FUN_005e9f20("false","..\\scilib\\platform\\tsprite.cpp",0xd5);
          return;
        }
        iVar2 = FUN_00623910();
        if (iVar2 < iVar4) {
          FUN_005e9f20("false","..\\scilib\\platform\\tsprite.cpp",0xd7);
          return;
        }
      }
      DAT_00795fac = (param_7 - param_5) * (param_8 - param_6) + DAT_00795fac;
      iVar2 = FUN_006238d0(param_6);
      iVar4 = FUN_00623930();
      local_14 = iVar2 + iVar4 * param_5;
      local_c = *(int *)(*(int *)(*(int *)(param_1 + 0x164) + 4 + param_2 * 8) + 0xc +
                        param_3 * 0x10);
      local_18 = (undefined4 *)(local_c + param_10 * 4);
      local_10 = param_8 - param_6;
      local_8 = param_7 - param_5;
      if ((DAT_00795fb7 == '\0') && (param_15 == '\0')) {
        if ((param_13 == 0xff) && (param_14 == 1)) {
          local_3c = FUN_00618ed0;
        }
        else {
          FUN_00618e00(param_13);
          local_3c = FUN_0061a4a0;
        }
      }
      else {
        FUN_00618e00(param_13);
        local_3c = FUN_0061b450;
      }
      local_40 = FUN_006238b0();
      local_18 = (undefined4 *)((int)local_18 + -4);
      local_14 = local_14 - local_40;
      if (param_14 < 2) {
        while (local_10 != 0) {
          local_14 = local_14 + local_40;
          local_18 = local_18 + 1;
          local_10 = local_10 + -1;
          (*local_3c)(local_14,*local_18,param_9,local_8,param_1 + 0x16c,param_13,param_14);
        }
      }
      else {
        while (local_10 != 0) {
          local_18 = local_18 + 1;
          local_10 = local_10 + -1;
          for (local_6c = 0; local_6c < param_14; local_6c = local_6c + 1) {
            local_14 = local_14 + local_40;
            (*local_3c)(local_14,*local_18,param_9,local_8,param_1 + 0x16c,param_13,param_14);
          }
        }
      }
    }
  }
  return;
}

