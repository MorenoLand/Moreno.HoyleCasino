// FUN_00607da0  00607da0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_00607da0(undefined4 *param_1)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aac68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0062aea0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = VSoundManager::vftable;
  if (DAT_007960cb == '\0') {
    uVar1 = FUN_00607900("Sound",1);
    *(undefined1 *)((int)param_1 + 9) = uVar1;
    FUN_00608270();
    for (local_14 = 0; local_14 < 0xc; local_14 = local_14 + 1) {
      *(undefined4 *)(&DAT_00796b38 + local_14 * 0x24) = 0;
      *(undefined4 *)(&DAT_00796b3c + local_14 * 0x24) = 0;
      *(undefined4 *)(&DAT_00796b40 + local_14 * 0x24) = 0;
      (&DAT_00796b44)[local_14 * 0x24] = 0;
      *(undefined4 *)(&DAT_00796b48 + local_14 * 0x24) = 5;
      *(undefined4 *)(&DAT_00796b4c + local_14 * 0x24) = 0;
    }
    for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
      *(undefined4 *)(&DAT_00796d28 + local_14 * 0x74) = 0;
      *(undefined4 *)(&DAT_00796d2c + local_14 * 0x74) = 0;
      (&DAT_00796d30)[local_14 * 0x74] = 0;
      *(undefined4 *)(&DAT_00796d34 + local_14 * 0x74) = 0;
      *(undefined4 *)(&DAT_00796d38 + local_14 * 0x74) = 0;
      (&DAT_00796d3c)[local_14 * 0x74] = 0;
      *(undefined4 *)(&DAT_00796d40 + local_14 * 0x74) = 0xffffffff;
      *(undefined4 *)(&DAT_00796d44 + local_14 * 0x74) = 0xffffffff;
      *(undefined4 *)(&DAT_00796d94 + local_14 * 0x74) = 0x3f800000;
      *(undefined4 *)(&DAT_00796d98 + local_14 * 0x74) = _DAT_006b3654;
    }
    uVar1 = FUN_00607900("UseWaveOut",0);
    *(undefined1 *)((int)param_1 + 10) = uVar1;
    if (*(char *)((int)param_1 + 10) == '\0') {
      cVar2 = FUN_00683f60(0,0);
      if ((cVar2 == '\0') || (iVar3 = alGetError(), iVar3 != 0)) {
        DAT_007960cb = '\x01';
      }
      else {
        alGenSources(0xf,&DAT_00796ce8);
        iVar3 = alGetError();
        if (iVar3 != 0) {
          FUN_005e9f20("0 && error","..\\scilib\\platform\\VSoundManager.cpp",0x5c);
        }
        alGenBuffers(0x12,&DAT_00796e88);
        iVar3 = alGetError();
        if (iVar3 != 0) {
          FUN_005e9f20("0 && error","..\\scilib\\platform\\VSoundManager.cpp",0x60);
        }
        for (local_14 = 0; local_14 < 0xc; local_14 = local_14 + 1) {
          *(undefined4 *)(&DAT_00796b38 + local_14 * 0x24) =
               *(undefined4 *)(&DAT_00796e88 + local_14 * 4);
          *(undefined4 *)(&DAT_00796b3c + local_14 * 0x24) =
               *(undefined4 *)(&DAT_00796ce8 + local_14 * 4);
        }
        param_1[3] = 0;
        *(undefined1 *)(param_1 + 4) = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        for (local_14 = 0; local_14 < 0x14; local_14 = local_14 + 1) {
          *(undefined4 *)(&DAT_00796a48 + local_14 * 0xc) = 0;
          *(undefined4 *)(&DAT_00796a4c + local_14 * 0xc) = 0;
          *(undefined4 *)(&DAT_00796a50 + local_14 * 0xc) = 0;
        }
      }
    }
    else {
      FUN_0062fde0("Using WaveOut\n");
    }
  }
  ExceptionList = local_10;
  return param_1;
}

