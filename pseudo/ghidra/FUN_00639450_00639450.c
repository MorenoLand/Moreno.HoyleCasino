// FUN_00639450  00639450

void __thiscall FUN_00639450(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int local_8;
  
  for (local_8 = 0; iVar1 = FUN_00636610(param_1), local_8 < iVar1; local_8 = local_8 + 1) {
    if ((local_8 != param_3) && (iVar1 = FUN_00639110(local_8), iVar1 != 0)) {
      FUN_0064b790(param_2);
    }
  }
  return;
}

