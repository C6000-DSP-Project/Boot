
-e _c_int00

IRAMStart  = 0x80001000;
IRAMSize   = 0x0001F000;

STACKStart = IRAMStart + IRAMSize;


MEMORY
{
    ARMRAM      org = 0xFFFF0000    len = 0x00002000  //   8KB ARM ±¾µØ RAM

    SHRAM       org = 0x80000000    len = 0x00020000  // 128KB ¹²Ïí RAM
    DDR2        org = 0xC0000000    len = 0x08000000  // 128MB DDR2
}

SECTIONS
{
    .c_int00		> SHRAM
    .text			> SHRAM
    .fiq_stack		> SHRAM
    .irq_stack		> SHRAM
    .cinit			> SHRAM
    .const			> SHRAM
    .data			> SHRAM
    .bss			> SHRAM

    .intvecs 		> ARMRAM
}
