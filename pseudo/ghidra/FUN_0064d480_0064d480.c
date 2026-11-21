// FUN_0064d480  0064d480

undefined4 __thiscall
FUN_0064d480(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_20 [4];
  int local_1c;
  int local_14;
  int local_10;
  int local_8;
  
  *(undefined1 *)(param_1 + 0x38) = 1;
  uVar1 = FUN_005f3bf0(local_20,0xffffffff);
  (**(code **)(*DAT_0162ee84 + 0x364))(uVar1);
  *(undefined4 *)(param_1 + 0x34) = param_4;
  iVar2 = FUN_00636610();
  if (local_1c == iVar2) {
    if (local_8 == 0) {
      FUN_005f2670(0x138c,param_2,param_3,2,0,0);
      uVar1 = 0x138c;
    }
    else if ((local_14 == 1) && (local_10 == 1)) {
      FUN_005f2670(0x138d,param_2,param_3,2,0,0);
      uVar1 = 0x138d;
    }
    else {
      FUN_005f2670(0x138b,param_2,param_3,2,0,0);
      uVar1 = 0x138b;
    }
  }
  else if (local_8 == 0) {
    FUN_005f2670(0x138a,param_2,param_3,2,0,0);
    uVar1 = 0x138a;
  }
  else if ((local_14 == 1) && (local_10 == 1)) {
    FUN_005f2670(0x1389,param_2,param_3,2,0,0);
    uVar1 = 0x1389;
  }
  else {
    FUN_005f2670(5000,param_2,param_3,2,0,0);
    uVar1 = 5000;
  }
  return uVar1;
}

