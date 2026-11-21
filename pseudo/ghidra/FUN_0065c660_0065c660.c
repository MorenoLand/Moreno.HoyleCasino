// FUN_0065c660  0065c660

void __thiscall FUN_0065c660(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_14;
  undefined8 local_c;
  
  if (param_2 == 0x5a) {
    FUN_005f87d0();
    FUN_005fb3a0(0);
    iVar1 = FUN_00606570();
    if (iVar1 == 0x5f) {
      FUN_0064f470(0);
    }
    else {
      uVar2 = FUN_006639a0((int)*(char *)(param_1 + 0x1c2));
      FUN_0064f470(uVar2);
    }
  }
  else if (param_2 == 0x5b) {
    if ((*(int *)(param_1 + 0x1bc) != 0) && (*(int *)(*(int *)(param_1 + 0x1bc) + 0x70) != 0)) {
      local_20 = 6000;
      local_1c = 0xffffffff;
      local_14 = 0;
      local_c = 0x3ff0000000000000;
      local_24 = 0xffffffff;
      FUN_006476f0(&local_24,0,0,0xffffffff,1);
    }
  }
  else if (param_2 == 99) {
    FUN_0065c0c0();
  }
  return;
}

