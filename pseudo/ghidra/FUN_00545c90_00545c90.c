// FUN_00545c90  00545c90

void __fastcall FUN_00545c90(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 local_14;
  undefined4 local_c;
  undefined4 local_8;
  
  cVar1 = FUN_005f54c0();
  if ((cVar1 != '\0') && (cVar1 = FUN_00544760(2), cVar1 == '\0')) {
    iVar2 = FUN_00542a00(*(undefined4 *)(DAT_00793404 + 0x20));
    if (iVar2 == 1) {
      local_14 = 0x3116f6;
      local_c = DAT_0073b3b8;
      local_8 = DAT_0073b3bc;
    }
    else if (iVar2 == 3) {
      local_14 = 0x3116f4;
      local_c = DAT_0073b394;
      local_8 = DAT_0073b398;
    }
    else if (iVar2 == 4) {
      local_14 = 0x3116f5;
      local_c = DAT_0073b388;
      local_8 = DAT_0073b38c;
    }
    else {
      local_14 = 0x3116f7;
      local_c = DAT_0073b3a0;
      local_8 = DAT_0073b3a4;
    }
    (**(code **)(**(int **)(param_1 + 0x34) + 0x44))(local_c,local_8);
    FUN_005eaf00(local_14);
    (**(code **)(**(int **)(param_1 + 0x34) + 0x74))();
  }
  return;
}

