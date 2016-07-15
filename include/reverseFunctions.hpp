#pragma once

#include "medipack.h"
#include "tampi/async.hpp"

namespace medi {

  template<typename DATATYPE>
  void TAMPI_Send_adj(typename DATATYPE::AdjointType* bufAdjoints, typename DATATYPE::PassiveType* bufPrimals, int bufSize, MPI_Datatype bufType, int count, int dest, int tag, TAMPI_Comm comm) {
    MEDI_UNUSED(bufPrimals);
    MEDI_UNUSED(count);
    MPI_Recv(bufAdjoints, bufSize, bufType, dest, tag, comm, MPI_STATUS_IGNORE);
  }

  template<typename DATATYPE>
  void TAMPI_Isend_adj(typename DATATYPE::AdjointType* bufAdjoints, typename DATATYPE::PassiveType* bufPrimals, int bufSize, MPI_Datatype bufType, int count, int dest, int tag, TAMPI_Comm comm, TAMPI_Request* request) {
    MEDI_UNUSED(bufPrimals);
    MEDI_UNUSED(count);
    MPI_Irecv(bufAdjoints, bufSize, bufType, dest, tag, comm, &request->request);
  }

  template<typename DATATYPE>
  void TAMPI_Bsend_adj(typename DATATYPE::AdjointType* bufAdjoints, typename DATATYPE::PassiveType* bufPrimals, int bufSize, MPI_Datatype bufType, int count, int dest, int tag, TAMPI_Comm comm) {
    MEDI_UNUSED(bufPrimals);
    MEDI_UNUSED(count);
    MPI_Recv(bufAdjoints, bufSize, bufType, dest, tag, comm, MPI_STATUS_IGNORE);
  }

  template<typename DATATYPE>
  void TAMPI_Ibsend_adj(typename DATATYPE::AdjointType* bufAdjoints, typename DATATYPE::PassiveType* bufPrimals, int bufSize, MPI_Datatype bufType, int count, int dest, int tag, TAMPI_Comm comm, TAMPI_Request* request) {
    MEDI_UNUSED(bufPrimals);
    MEDI_UNUSED(count);
    MPI_Irecv(bufAdjoints, bufSize, bufType, dest, tag, comm, &request->request);
  }

  template<typename DATATYPE>
  void TAMPI_Ssend_adj(typename DATATYPE::AdjointType* bufAdjoints, typename DATATYPE::PassiveType* bufPrimals, int bufSize, MPI_Datatype bufType, int count, int dest, int tag, TAMPI_Comm comm) {
    MEDI_UNUSED(bufPrimals);
    MEDI_UNUSED(count);
    MPI_Recv(bufAdjoints, bufSize, bufType, dest, tag, comm, MPI_STATUS_IGNORE);
  }

  template<typename DATATYPE>
  void TAMPI_Issend_adj(typename DATATYPE::AdjointType* bufAdjoints, typename DATATYPE::PassiveType* bufPrimals, int bufSize, MPI_Datatype bufType, int count, int dest, int tag, TAMPI_Comm comm, TAMPI_Request* request) {
    MEDI_UNUSED(bufPrimals);
    MEDI_UNUSED(count);
    MPI_Irecv(bufAdjoints, bufSize, bufType, dest, tag, comm, &request->request);
  }

  template<typename DATATYPE>
  void TAMPI_Rsend_adj(typename DATATYPE::AdjointType* bufAdjoints, typename DATATYPE::PassiveType* bufPrimals, int bufSize, MPI_Datatype bufType, int count, int dest, int tag, TAMPI_Comm comm) {
    MEDI_UNUSED(bufPrimals);
    MEDI_UNUSED(count);
    MPI_Recv(bufAdjoints, bufSize, bufType, dest, tag, comm, MPI_STATUS_IGNORE);
  }

  template<typename DATATYPE>
  void TAMPI_Irsend_adj(typename DATATYPE::AdjointType* bufAdjoints, typename DATATYPE::PassiveType* bufPrimals, int bufSize, MPI_Datatype bufType, int count, int dest, int tag, TAMPI_Comm comm, TAMPI_Request* request) {
    MEDI_UNUSED(bufPrimals);
    MEDI_UNUSED(count);
    MPI_Irecv(bufAdjoints, bufSize, bufType, dest, tag, comm, &request->request);
  }

  template<typename DATATYPE>
  void TAMPI_Recv_adj(typename DATATYPE::AdjointType* bufAdjoints, typename DATATYPE::PassiveType* bufPrimals, int bufSize, MPI_Datatype bufType, int count, int src, int tag, TAMPI_Comm comm, TAMPI_Status* status) {
    MEDI_UNUSED(bufPrimals);
    MEDI_UNUSED(count);
    MEDI_UNUSED(status);
    MPI_Send(bufAdjoints, bufSize, bufType, src, tag, comm);
  }

  template<typename DATATYPE>
  void TAMPI_Irecv_adj(typename DATATYPE::AdjointType* bufAdjoints, typename DATATYPE::PassiveType* bufPrimals, int bufSize, MPI_Datatype bufType, int count, int src, int tag, TAMPI_Comm comm, TAMPI_Request* request) {
    MEDI_UNUSED(bufPrimals);
    MEDI_UNUSED(count);
    MPI_Isend(bufAdjoints, bufSize, bufType, src, tag, comm, &request->request);
  }

  template<typename SENDTYPE, typename RECVTYPE>
  void TAMPI_Sendrecv_adj(typename SENDTYPE::AdjointType* sendbuf, typename SENDTYPE::PassiveType* sendbufPrimals, int sendbufSize, MPI_Datatype sendbufType, int sendcount, int dest, int sendtag,
                     typename RECVTYPE::AdjointType* recvbuf, typename SENDTYPE::PassiveType* recvbufPrimals, int recvbufSize, MPI_Datatype recvbufType, int recvcount, int source, int recvtag, TAMPI_Comm comm, TAMPI_Status*  status) {

    MEDI_UNUSED(sendbufPrimals);
    MEDI_UNUSED(sendcount);
    MEDI_UNUSED(recvbufPrimals);
    MEDI_UNUSED(recvcount);
    MPI_Sendrecv(recvbuf, recvbufSize, recvbufType, source, recvtag, sendbuf, sendbufSize, sendbufType, dest, sendtag, comm, status);
  }

  template<typename SENDTYPE, typename RECVTYPE>
  void TAMPI_Scatter_adj(typename SENDTYPE::AdjointType* &sendbufAdjoints, typename SENDTYPE::PassiveType* &sendbufPrimals, int sendbufSize, MPI_Datatype sendbufType, int sendcount, typename RECVTYPE::AdjointType* &recvbufAdjoints, typename RECVTYPE::PassiveType* &recvbufPrimals, int recvbufSize, MPI_Datatype recvbufType, int recvcount, int root, TAMPI_Comm comm) {
    MEDI_UNUSED(sendbufPrimals);
    MEDI_UNUSED(sendcount);
    MEDI_UNUSED(recvbufPrimals);
    MEDI_UNUSED(recvcount);

    MPI_Gather(recvbufAdjoints, recvbufSize, recvbufType, sendbufAdjoints, sendbufSize, sendbufType, root, comm);
  }

  template<typename SENDTYPE, typename RECVTYPE>
  void TAMPI_Iscatter_adj(typename SENDTYPE::AdjointType* &sendbufAdjoints, typename SENDTYPE::PassiveType* &sendbufPrimals, int sendbufSize, MPI_Datatype sendbufType, int sendcount, typename RECVTYPE::AdjointType* &recvbufAdjoints, typename RECVTYPE::PassiveType* &recvbufPrimals, int recvbufSize, MPI_Datatype recvbufType, int recvcount, int root, TAMPI_Comm comm, TAMPI_Request* request) {
    MEDI_UNUSED(sendbufPrimals);
    MEDI_UNUSED(sendcount);
    MEDI_UNUSED(recvbufPrimals);
    MEDI_UNUSED(recvcount);

    MPI_Igather(recvbufAdjoints, recvbufSize, recvbufType, sendbufAdjoints, sendbufSize, sendbufType, root, comm, &request->request);
  }

  template<typename SENDTYPE, typename RECVTYPE>
  void TAMPI_Scatterv_adj(typename SENDTYPE::AdjointType* &sendbufAdjoints, typename SENDTYPE::PassiveType* &sendbufPrimals, int* sendbufCounts, const int* sendbufDispl, MPI_Datatype sendbufType, const int* sendcount, const int* displs, typename RECVTYPE::AdjointType* &recvbufAdjoints, typename RECVTYPE::PassiveType* &recvbufPrimals, int recvbufSize, MPI_Datatype recvbufType, int recvcount, int root, TAMPI_Comm comm) {
    MEDI_UNUSED(sendbufPrimals);
    MEDI_UNUSED(sendcount);
    MEDI_UNUSED(recvbufPrimals);
    MEDI_UNUSED(recvcount);

    MPI_Gatherv(recvbufAdjoints, recvbufSize, recvbufType, sendbufAdjoints, sendbufCounts, sendbufDispl, sendbufType, root, comm);
  }

  template<typename SENDTYPE, typename RECVTYPE>
  void TAMPI_Iscatterv_adj(typename SENDTYPE::AdjointType* &sendbufAdjoints, typename SENDTYPE::PassiveType* &sendbufPrimals, int* sendbufCounts, const int* sendbufDispl, MPI_Datatype sendbufType, const int* sendcount, const int* displs, typename RECVTYPE::AdjointType* &recvbufAdjoints, typename RECVTYPE::PassiveType* &recvbufPrimals, int recvbufSize, MPI_Datatype recvbufType, int recvcount, int root, TAMPI_Comm comm, TAMPI_Request* request) {
    MEDI_UNUSED(sendbufPrimals);
    MEDI_UNUSED(sendcount);
    MEDI_UNUSED(recvbufPrimals);
    MEDI_UNUSED(recvcount);

    MPI_Igatherv(recvbufAdjoints, recvbufSize, recvbufType, sendbufAdjoints, sendbufCounts, sendbufDispl, sendbufType, root, comm, &request->request);
  }

  template<typename SENDTYPE, typename RECVTYPE>
  void TAMPI_Gather_adj(typename SENDTYPE::AdjointType* &sendbufAdjoints, typename SENDTYPE::PassiveType* &sendbufPrimals, int sendbufSize, MPI_Datatype sendbufType, int sendcount, typename RECVTYPE::AdjointType* &recvbufAdjoints, typename RECVTYPE::PassiveType* &recvbufPrimals, int recvbufSize, MPI_Datatype recvbufType, int recvcount, int root, TAMPI_Comm comm) {
    MEDI_UNUSED(sendbufPrimals);
    MEDI_UNUSED(sendcount);
    MEDI_UNUSED(recvbufPrimals);
    MEDI_UNUSED(recvcount);

    MPI_Scatter(recvbufAdjoints, recvbufSize, recvbufType, sendbufAdjoints, sendbufSize, sendbufType, root, comm);
  }

  template<typename SENDTYPE, typename RECVTYPE>
  void TAMPI_Igather_adj(typename SENDTYPE::AdjointType* &sendbufAdjoints, typename SENDTYPE::PassiveType* &sendbufPrimals, int sendbufSize, MPI_Datatype sendbufType, int sendcount, typename RECVTYPE::AdjointType* &recvbufAdjoints, typename RECVTYPE::PassiveType* &recvbufPrimals, int recvbufSize, MPI_Datatype recvbufType, int recvcount, int root, TAMPI_Comm comm, TAMPI_Request* request) {
    MEDI_UNUSED(sendbufPrimals);
    MEDI_UNUSED(sendcount);
    MEDI_UNUSED(recvbufPrimals);
    MEDI_UNUSED(recvcount);

    MPI_Iscatter(recvbufAdjoints, recvbufSize, recvbufType, sendbufAdjoints, sendbufSize, sendbufType, root, comm, &request->request);
  }

  template<typename SENDTYPE, typename RECVTYPE>
  void TAMPI_Gatherv_adj(typename SENDTYPE::AdjointType* &sendbufAdjoints, typename SENDTYPE::PassiveType* &sendbufPrimals, int sendbufSize, MPI_Datatype sendbufType, int sendcount, typename RECVTYPE::AdjointType* &recvbufAdjoints, typename RECVTYPE::PassiveType* &recvbufPrimals, int* recvbufCounts, const int* recvbufDispls, MPI_Datatype recvbufType, const int* recvcounts, const int* displs, int root, TAMPI_Comm comm) {
    MEDI_UNUSED(sendbufPrimals);
    MEDI_UNUSED(sendcount);
    MEDI_UNUSED(recvbufPrimals);
    MEDI_UNUSED(recvcounts);
    MEDI_UNUSED(displs);

    MPI_Scatterv(recvbufAdjoints, recvbufCounts, recvbufDispls, recvbufType, sendbufAdjoints, sendbufSize, sendbufType, root, comm);
  }

  template<typename SENDTYPE, typename RECVTYPE>
  void TAMPI_Igatherv_adj(typename SENDTYPE::AdjointType* &sendbufAdjoints, typename SENDTYPE::PassiveType* &sendbufPrimals, int sendbufSize, MPI_Datatype sendbufType, int sendcount, typename RECVTYPE::AdjointType* &recvbufAdjoints, typename RECVTYPE::PassiveType* &recvbufPrimals, int* recvbufCounts, const int* recvbufDispls, MPI_Datatype recvbufType, const int* recvcounts, const int* displs, int root, TAMPI_Comm comm, TAMPI_Request* request) {
    MEDI_UNUSED(sendbufPrimals);
    MEDI_UNUSED(sendcount);
    MEDI_UNUSED(recvbufPrimals);
    MEDI_UNUSED(recvcounts);
    MEDI_UNUSED(displs);

    MPI_Iscatterv(recvbufAdjoints, recvbufCounts, recvbufDispls, recvbufType, sendbufAdjoints, sendbufSize, sendbufType, root, comm, &request->request);
  }

  template<typename SENDTYPE, typename RECVTYPE>
  void TAMPI_Allgather_adj(typename SENDTYPE::AdjointType* &sendbufAdjoints, typename SENDTYPE::PassiveType* &sendbufPrimals, int sendbufSize, MPI_Datatype sendbufType, int sendcount, typename RECVTYPE::AdjointType* &recvbufAdjoints, typename RECVTYPE::PassiveType* &recvbufPrimals, int recvbufSize, MPI_Datatype recvbufType, int recvcount, TAMPI_Comm comm) {
    MEDI_UNUSED(sendbufPrimals);
    MEDI_UNUSED(sendcount);
    MEDI_UNUSED(recvbufPrimals);
    MEDI_UNUSED(recvcount);

    MPI_Alltoall(recvbufAdjoints, recvbufSize, recvbufType, sendbufAdjoints, sendbufSize, sendbufType, comm);
  }

  template<typename DATATYPE>
  void TAMPI_Reduce_adj(typename DATATYPE::AdjointType* &sendbufAdjoints, typename DATATYPE::PassiveType* &sendbufPrimals, int sendbufSize, MPI_Datatype sendbufType, typename DATATYPE::AdjointType* &recvbufAdjoints, typename DATATYPE::PassiveType* &recvbufPrimals, int recvbufSize, MPI_Datatype recvbufType, int count, TAMPI_Op op, int root, TAMPI_Comm comm) {
    MEDI_UNUSED(count);
    if(root == getCommRank(comm)) {
      MPI_Bcast(recvbufAdjoints, recvbufSize, recvbufType, root, comm);
      deleteReverseBuffer(sendbufAdjoints, sendbufPrimals, op.requiresPrimalSend);
      sendbufAdjoints = recvbufAdjoints;
      sendbufPrimals = recvbufPrimals;
      recvbufAdjoints = NULL;
      recvbufPrimals = NULL;
    } else {
      MPI_Bcast(sendbufAdjoints, sendbufSize, sendbufType, root, comm);
    }
  }

  template<typename DATATYPE>
  void TAMPI_Ireduce_adj(typename DATATYPE::AdjointType* &sendbufAdjoints, typename DATATYPE::PassiveType* &sendbufPrimals, int sendbufSize, MPI_Datatype sendbufType, typename DATATYPE::AdjointType* &recvbufAdjoints, typename DATATYPE::PassiveType* &recvbufPrimals, int recvbufSize, MPI_Datatype recvbufType, int count, TAMPI_Op op, int root, TAMPI_Comm comm, TAMPI_Request* request) {
    MEDI_UNUSED(count);
    if(root == getCommRank(comm)) {
      MPI_Ibcast(recvbufAdjoints, recvbufSize, recvbufType, root, comm, &request->request);
      deleteReverseBuffer(sendbufAdjoints, sendbufPrimals, op.requiresPrimalSend);
      sendbufAdjoints = recvbufAdjoints;
      sendbufPrimals = recvbufPrimals;
      recvbufAdjoints = NULL;
      recvbufPrimals = NULL;
    } else {
      MPI_Ibcast(sendbufAdjoints, sendbufSize, sendbufType, root, comm, &request->request);
    }
  }
}