void Philo_ctor(Philo * const me) {
    QActive_ctor(&me->super, Q_STATE_CAST(&Philo_initial));
    QTimeEvt_ctorX(&me->timeEvt, me, (enum_t)TIMEOUT_SIG, 0U);
}
