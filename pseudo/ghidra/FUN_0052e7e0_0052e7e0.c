// FUN_0052e7e0  0052e7e0

void FUN_0052e7e0(int param_1)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a4599;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(char *)(param_1 + 4) == '\0') {
    if (((*(int *)(param_1 + 0x18) == 1) && (cVar1 = FUN_005f56a0(param_1), cVar1 != '\0')) &&
       (cVar1 = FUN_00535e20(uVar2), cVar1 != '\0')) {
      *(undefined1 *)(param_1 + 4) = 1;
      pvVar3 = operator_new(0x20);
      local_8 = 0;
      if (pvVar3 == (void *)0x0) {
        local_20 = 0;
      }
      else {
        local_20 = FUN_00530f30();
      }
      local_8 = 0xffffffff;
      FUN_005fc420(local_20);
    }
    if (*(int *)(param_1 + 0x18) == 4) {
      iVar4 = tolower((int)*(char *)(param_1 + 0x14));
      switch(iVar4) {
      case 0x62:
        FUN_005f2a60(0x30ef5c,0);
        cVar1 = FUN_006026d0();
        if (cVar1 != '\0') {
          FUN_00535ae0(1);
        }
        break;
      case 99:
        FUN_005f2a60(0x30ef5a,0);
        cVar1 = FUN_006026d0();
        if (cVar1 != '\0') {
          FUN_00535ae0(4);
        }
        break;
      case 0x6d:
        FUN_005f2a60(0x30ef5d,0);
        cVar1 = FUN_006026d0();
        if (cVar1 != '\0') {
          FUN_00535ae0(0);
        }
        break;
      case 0x70:
        FUN_005f2a60(0x30ef5e,0);
        cVar1 = FUN_006026d0();
        if (cVar1 != '\0') {
          FUN_00535ae0(2);
        }
        break;
      case 0x73:
        FUN_005f2a60(0x30ef5b,0);
        cVar1 = FUN_006026d0();
        if (cVar1 != '\0') {
          FUN_00535ae0(3);
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}

