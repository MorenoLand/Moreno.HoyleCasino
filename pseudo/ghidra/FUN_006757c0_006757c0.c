// FUN_006757c0  006757c0

void FUN_006757c0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 *local_8;
  
  cVar1 = FUN_00675100(&local_8,"CLOTHING");
  if ((cVar1 != '\0') && (FUN_00675830(local_8,param_1,param_2), local_8 != (undefined4 *)0x0)) {
    (**(code **)*local_8)(1);
  }
  return;
}

