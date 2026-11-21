// FUN_005f8ea0  005f8ea0

undefined4 __thiscall FUN_005f8ea0(int *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined1 local_60 [16];
  int local_50;
  int local_4c [17];
  int local_8;
  
  if (param_1 == (int *)0x0) {
    FUN_005e9f20("false","..\\scilib\\sciplane.cpp",0x227);
    uVar2 = 0;
  }
  else {
    cVar1 = FUN_005f88f0();
    if (cVar1 == '\0') {
      cVar1 = FUN_005ec3a0(local_60,param_1 + 0x60,param_2);
      if (cVar1 == '\0') {
        uVar2 = 0;
      }
      else {
        local_50 = FUN_00624c50(param_2,param_1 + 0x60,local_4c);
        for (local_8 = 0; local_8 < local_50; local_8 = local_8 + 1) {
          iVar3 = FUN_005f84f0();
          iVar4 = FUN_005f84d0();
          iVar5 = local_8;
          local_4c[local_8 * 4] = local_4c[local_8 * 4] + iVar4;
          local_4c[iVar5 * 4 + 1] = local_4c[iVar5 * 4 + 1] + iVar3;
          local_4c[iVar5 * 4 + 2] = local_4c[iVar5 * 4 + 2] + iVar4;
          local_4c[iVar5 * 4 + 3] = local_4c[iVar5 * 4 + 3] + iVar3;
          FUN_00630130(param_1[0x6a],local_4c + local_8 * 4,param_1);
        }
        if ((param_1[0x5f] == 0) && ((char)param_1[0x5e] == '\0')) {
          if ((param_1[0x5f] == 0) && ((char)param_1[0x5e] == '\0')) {
            FUN_005e9f20("m_poBackground || useBackgroundColor","..\\scilib\\sciplane.cpp",0x23f);
          }
          FUN_005f8a40(0,0,0);
        }
        if ((char)param_1[0x5e] != '\0') {
          (**(code **)(*param_1 + 0x14))(*param_2,param_2[1],param_2[2],param_2[3]);
        }
        if (param_1[0x5f] != 0) {
          (**(code **)(*(int *)param_1[0x5f] + 0x9c))(param_2);
        }
        if (DAT_007960cd != '\0') {
          FUN_00623950(param_2);
        }
        FUN_005f91b0(param_2,0);
        local_70 = *param_2;
        local_6c = param_2[1];
        local_68 = param_2[2];
        local_64 = param_2[3];
        iVar5 = FUN_005f84f0();
        iVar3 = FUN_005f84d0();
        local_70 = local_70 + iVar3;
        local_6c = local_6c + iVar5;
        local_68 = local_68 + iVar3;
        local_64 = local_64 + iVar5;
        FUN_00630280(param_1[0x6a],&local_70,param_1,param_3);
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

