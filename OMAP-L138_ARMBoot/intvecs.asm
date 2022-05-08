	.global _c_int00
	.sect ".intvecs"

	ldr pc, c_int00      ; reset interrupt
	.word 0xEAFFFFFE     ; undefined instruction interrupt
	.word 0xEAFFFFFE     ; software interrupt
	.word 0xEAFFFFFE     ; abort (prefetch) interrupt
	.word 0xEAFFFFFE     ; abort (data) interrupt
	.word 0xEAFFFFFE     ; reserved
	.word 0xEAFFFFFE     ; irq(not used in this sample project)
	ldr    r8, [pc, #-0xA24] ; read AINTC HIPVR1 register at 0xFFFEF600
	ldr    pc, [r8]

c_int00 .long _c_int00

	.sect ".perivecs"
	.word 0 ;0
	.word 0
	.word 0
              .word 0
	.word 0 ; 4
	.word 0
	.word 0 
	.word 0
	.word 0
	.word 0 ;9
	.word 0 ;10
	.word 0
	.word 0
	.word 0
	.word 0
	.word 0
	.word 0
	.word 0
	.word 0
	.word 0 ;19
	.word 0 ;20
              .word 0
	.word 0
	.word 0
	.word 0
	.word 0
	.word 0
	.word 0
              .word 0
	.word 0 ;29
	.word 0 ;30
	.word 0
	.word 0
	.word 0
	.word 0
	.word 0
	.word 0
	.word 0
	.word 0
	.word 0 ;39
	.word 0 ;40
	.word 0
	.word 0
	.word 0
	.word 0
	.word 0
	.word 0
	.word 0
	.word 0
	.word 0 ;49
	.word 0 ;50
	.word 0
	.word 0
	.word 0
	.word 0
	.word 0
	.word 0
	.word 0
	.word 0
	.word 0 ;59
	.word 0 ;60
              .word 0
	.word 0
	.word 0
	.word 0
	.word 0
	.word 0
	.word 0
	.word 0
	.word 0 ;69
	.word 0 ;70
	.word 0
	.word 0
	.word 0
	.word 0
	.word 0
	.word 0
	.word 0
	.word 0
	.word 0 ;79
	.word 0 ;80
	.word 0
	.word 0
	.word 0
	.word 0
	.word 0
	.word 0
	.word 0
	.word 0
	.word 0 ;89
              .word 0
