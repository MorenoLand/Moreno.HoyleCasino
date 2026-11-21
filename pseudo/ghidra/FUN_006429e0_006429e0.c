// FUN_006429e0  006429e0

void FUN_006429e0(undefined2 param_1,undefined2 param_2,int param_3)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((uint)(param_3 + -1) >> 0x10);
  switch(param_3 + -1) {
  case 0:
    FUN_00642aa0(CONCAT22(uVar1,param_1),param_2,1,3,4,2);
    break;
  case 1:
    FUN_00642aa0(CONCAT22(uVar1,param_1),CONCAT22(uVar1,param_2),2,4,3,1);
    break;
  case 2:
    FUN_00642aa0(param_1,CONCAT22(uVar1,param_2),3,4,2,1);
    break;
  case 3:
  case 4:
    FUN_00642aa0(CONCAT22(uVar1,param_1),param_2,4,3,1,2);
    break;
  default:
    FUN_00642950(param_1,param_2);
  }
  return;
}

